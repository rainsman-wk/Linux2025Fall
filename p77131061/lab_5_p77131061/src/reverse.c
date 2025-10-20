#include "../include/reverse.h"
#include <string.h>

char *reverse(char *dest, const char *src)
{
    int len = strlen(src);
    for (int i = 0; i < len; i++) {
        dest[i] = src[len - 1 - i];
    }
    dest[len] = '\0';
    return dest;
}

