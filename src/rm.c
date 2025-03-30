#include "rm.h"

void RM_COMMAND(const char* FILENAME) {
    if (remove(FILENAME)) {
        puts("File not found or is directory!");
        return;
    }
    return;
}