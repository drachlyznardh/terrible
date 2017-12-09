
APP = terrible

INCLUDEDIR := hdr

SRCDIR := src
DEPDIR := .dep
OBJDIR := .obj

CFLAGS += --std=c11 -Wall -pedantic
CFLAGS += -I$(INCLUDEDIR)

all: run

SRCS += $(patsubst %, $(SRCDIR)/%.c, main buffer)
OBJS += $(patsubst $(SRCDIR)/%.c, $(OBJDIR)/%.o, $(SRCS))
DEPS += $(patsubst $(DEPDIR)/%.c, $(DEPDIR)/%.d, $(DEPS))

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(OBJDIR) $(DEPDIR)
	@printf "Compiling %s to %s …" $< $@
	@$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $< -MMD -MF $(DEPDIR)/$*.d -MT $@
	@printf " Done\n"

$(APP): $(OBJS)
	@printf "Linking %s into %s …" "$<" $@
	@$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)
	@printf " Done\n"

run: $(APP)
	@./$(APP)

clean:
	@rm -rf $(OBJDIR) $(DEPDIR)

.PHONY: run clean

