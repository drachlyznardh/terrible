
APP = terrible

INCLUDEDIR := hdr

SRCDIR := src
DEPDIR := .dep
OBJDIR := .obj

CFLAGS += --std=c11 -Wall -pedantic
CFLAGS += -I$(INCLUDEDIR)

all: run

SRCNAMES += main buffer buffer_int128

OBJS += $(patsubst %, $(OBJDIR)/%.o, $(SRCNAMES))
DEPS += $(patsubst %, $(DEPDIR)/%.d, $(SRCNAMES))

$(OBJDIR)/buffer_int128.o: $(SRCDIR)/buffer.template.c
	@mkdir -p $(OBJDIR) $(DEPDIR)
	@printf "Compiling %s to %s …" $< $@
	@$(CC) $(CPPFLAGS) -DTEMPLATE_TYPE=int -DTEMPLATE_SIZE=128 -DTEMPLATE_NAME=int128 $(CFLAGS) -c -o $@ $< -MMD -MF $(DEPDIR)/buffer_int128.d -MT $@
	@printf " Done\n"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR) $(DEPDIR)
	@printf "Compiling %s to %s …" $< $@
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $< -MMD -MF $(DEPDIR)/$*.d -MT $@
	@printf " Done\n"

$(APP): $(OBJS)
	@printf "Linking %s into %s …" "$^" $@
	@$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
	@printf " Done\n"

run: $(APP)
	@./$(APP)

clean:
	@rm -rf $(OBJDIR) $(DEPDIR)

.PHONY: run clean

