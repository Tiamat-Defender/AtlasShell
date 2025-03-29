#include "mkdir.h"

void MKDIR_COMMAND(const char* dir) {
    const char* DIRECTORY = CURRENT_DIR;
    strcat(DIRECTORY, dir);
    int response = mkdir(DIRECTORY, S_IXUSR);
    switch (response) {
        case 0:
            puts("MKDIR SUCCESS");
            break;
        default:
            puts("MKDIR FAILED!");
            break;
    }
}