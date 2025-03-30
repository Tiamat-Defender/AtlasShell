#pragma once
#include <stddef.h>

const char* builtins[] = {"echo", "exit", "type"};

void TYPE_COMMAND(const char* Type) {
    
    for (size_t i = 0; i < sizeof(builtins) / 16; i++) {
              if (strcmp(builtins[i], Type) == 0) {
                printf("%s is a shell builtin\n", Type);
                return;
              }
            }
        
            char *path = getenv(Type);
            if (path) {
              printf("%s is %s\n", Type, path);                     
            }else {
            printf("%s not found\n", Type);
            }
}