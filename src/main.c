
#include <stdlib.h>
#include <stdio.h>

#include "buffer.h"

#define TEMPLATE_TYPE int
#define TEMPLATE_SIZE 128
#include "buffer.template.h"

#define _STR(X) #X
#define STR(X) _STR(X)

int main (int argc, char **argv)
{
	printf("Hello\n");

	buffer_t b;
	COMPLETE_NAME(t) cb;
	printf("Name is %s\n", STR(COMPLETE_NAME(t)));

	printf("Buffersize is %d\n", buffer_get_size(&b));
	printf("Buffer_Int128 size name is %s\n", STR(COMPLETE_NAME(get_size)));
	printf("Buffer_Int128 size is %d\n", template_buffer_int128_get_size(&cb));
	printf("Buffer_Int128 size name is %s\n", STR(template_buffer_int128_get_size(&cb)));

	printf("Goodbye\n");
	return EXIT_SUCCESS;
}

