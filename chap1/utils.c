//
// Created by Loeng on 2024/9/11.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

void *checked_malloc(int len)
{
    void *p = malloc(len);
    assert(p);
    return p;
}

string String(char *s)
{
    string p = checked_malloc((int)strlen(s) + 1);
    strcpy(p, s);
    return p;
}