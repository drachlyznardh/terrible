
#ifndef __BUFFER_I128_H__
#define __BUFFER_I128_H__

#undef  TEMPLATE_TYPE
#define TEMPLATE_TYPE int
#undef  TEMPLATE_SIZE
#define TEMPLATE_SIZE 128
#include "buffer.template.h"

typedef COMPLETE_NAME(t) tbuffer_i128_t;

#define tbuffer_i128_get_size _COMPLETE_NAME(int,128,get_size)

#endif // __BUFFER_I128_H__

