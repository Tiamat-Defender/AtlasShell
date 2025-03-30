#include "ls.h"

void LS_COMMAND(const char* DIRECTORY) {
    
    DIR *dir = opendir(DIRECTORY);
    if (dir == NULL) {
        perror("Error opening directory");
        return 1;
    }

    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        printf("%s\n", entry->d_name);
    }

    if (closedir(dir) == -1) {
         perror("Error closing directory");
         return 1;
    }
    return;
}
