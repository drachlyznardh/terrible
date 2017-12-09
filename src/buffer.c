
#include <stdlib.h>

#include "buffer.h"

int buffer_get_size (const buffer_p p)
{
	if (p == NULL) return 0;
	return BUFFER_SIZE;
}

