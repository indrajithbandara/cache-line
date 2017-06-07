#ifndef BINDING_H_INCLUDED
#define BINDING_H_INCLUDED

// Returns the cache line size (in bytes) of the processor, or 0 on failure
#include <stddef.h>
size_t CacheLineSize();

#endif