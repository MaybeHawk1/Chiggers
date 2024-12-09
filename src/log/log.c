#include <stdio.h>
#include "log.h"

void error(const char *str) {
    printf("\033[31m[!]%s", str);
}

void warning(const char *str) {
    printf("\033[32m[~]%s", str);
}

void success(const char *str) {
    printf("\033[33m[*]%s", str);
}