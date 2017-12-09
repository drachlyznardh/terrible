
#ifndef __BUFFER_H__
#define __BUFFER_H__

#define BUFFER_SIZE 64

typedef struct {
	int content[BUFFER_SIZE];
} buffer_t;
typedef buffer_t *buffer_p;

int buffer_get_size (const buffer_p p);

#endif // __BUFFER_H__

