
#define __COMPLETE_NAME(x,y,z) template_buffer ## _ ## x ## y ## _ ## z
#define _COMPLETE_NAME(x,y,z) __COMPLETE_NAME(x,y,z)
#define COMPLETE_NAME(y) _COMPLETE_NAME(TEMPLATE_TYPE, TEMPLATE_SIZE, y)

typedef struct {
	TEMPLATE_TYPE content[TEMPLATE_SIZE];
} COMPLETE_NAME(t);
typedef COMPLETE_NAME(t) *COMPLETE_NAME(p);

TEMPLATE_TYPE COMPLETE_NAME(get_size) (const COMPLETE_NAME(p) p);

