#ifndef VALEXIT_H
#define VALEXIT_H
#include "../src/utils.c"

#include <stdlib.h>

// This file contains all exiting conditions, you can use if you want

void valexit_generic(const void *generic_ptr); // Verify if the generic structure isn't NULL;
void valexit_buffer(const char *buffer);       // Verify if buffer is valid.
void valexit_generic_with_msg(const void *generic_ptr,const char *msg);

#endif