#include "mkdir.h"

static struct stat st = {0};

void MKDIR_COMMAND(const char* DIRECTORY_PATH, const char** CURRENT_DIR) {

    if (stat(DIRECTORY_PATH, &st) == -1) {
        mkdir(DIRECTORY_PATH, 0700);
    } else {
        puts("Could not create directory!");
    }
}