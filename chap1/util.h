//
// Created by Loeng on 2024/9/11.
//
#include <assert.h>
#ifndef MODERN_COMPILER_IMPLEMENTATION_IN_C_UTIL_H
#define MODERN_COMPILER_IMPLEMENTATION_IN_C_UTIL_H

typedef char *string;
typedef char bool;

#define TRUE 1
#define FALSE 0

void *checked_malloc(int);
string String(char *);


#endif //MODERN_COMPILER_IMPLEMENTATION_IN_C_UTIL_H
