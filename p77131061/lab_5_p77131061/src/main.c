#include <stdio.h>
#include <stdlib.h>
#include "../include/reverse.h"

int main() {
    const char *src = "P77131061";
    char *dst = malloc(10);
    dst = reverse(dst, src);
    printf("%s\n", dst);
    free(dst);
    return 0;
}

