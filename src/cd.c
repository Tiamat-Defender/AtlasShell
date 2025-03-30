#include "cd.h"
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdio.h>

void CD_COMMAND(const char* dir, const char** output) {
    
    struct stat st = {0};

    if (stat(dir, &st) == -1) {
        puts("DIRECTORY NOT FOUND");
        return;
    } else {
        *output = dir;
        return;
    }
}