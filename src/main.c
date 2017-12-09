
#include <stdlib.h>
#include <stdio.h>

#include "buffer.h"
#include "buffer_c12.h"
#include "buffer_i128.h"

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

