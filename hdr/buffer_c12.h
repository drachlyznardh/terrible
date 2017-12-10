
#ifndef __BUFFER_C12_H__
#define __BUFFER_C12_H__

#undef  TEMPLATE_TYPE
#define TEMPLATE_TYPE char
#undef  TEMPLATE_SIZE
#define TEMPLATE_SIZE 12
#include "buffer.template.h"

typedef COMPLETE_NAME(t) tbuffer_c12_t;

#define tbuffer_c12_get_size _COMPLETE_NAME(char,12,get_size)

#endif // __BUFFER_C12_H__

