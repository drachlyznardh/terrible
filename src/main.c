
#include <stdlib.h>
#include <stdio.h>

#include "buffer.h"

int main (int argc, char **argv)
{
	printf("Hello\n");

	buffer_t b;

	printf("Buffersize is %d\n", buffer_get_size(&b));

	printf("Goodbye\n");
	return EXIT_SUCCESS;
}

