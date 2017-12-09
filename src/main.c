
#include <stdlib.h>
#include <stdio.h>

#include "buffer.h"

#undef  TEMPLATE_TYPE
#define TEMPLATE_TYPE int
#undef  TEMPLATE_SIZE
#define TEMPLATE_SIZE 128
#include "buffer.template.h"
typedef COMPLETE_NAME(t) tbuffer_i128_t;
#define tbuffer_i128_get_size _COMPLETE_NAME(int,128,get_size)

#undef  TEMPLATE_TYPE
#define TEMPLATE_TYPE char
#undef  TEMPLATE_SIZE
#define TEMPLATE_SIZE 12
#include "buffer.template.h"
typedef COMPLETE_NAME(t) tbuffer_c12_t;
#define tbuffer_c12_get_size _COMPLETE_NAME(char,12,get_size)

int main (int argc, char **argv)
{
	printf("Hello\n");

	buffer_t b;
	tbuffer_c12_t cb12;
	tbuffer_i128_t ib128;

	printf("Buffersize is %d\n", buffer_get_size(&b));
	printf("Size for cb12 is %d\n", template_buffer_char12_get_size(&cb12));
	printf("Size for ib128 is %d\n", template_buffer_int128_get_size(&ib128));
	printf("Size for cb12 is %d\n", tbuffer_c12_get_size(&cb12));
	printf("Size for ib128 is %d\n", tbuffer_i128_get_size(&ib128));

	printf("Goodbye\n");
	return EXIT_SUCCESS;
}

