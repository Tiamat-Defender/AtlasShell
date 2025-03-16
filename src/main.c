#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>
#ifdef _WIN32
#include <direct.h>
#endif

int DirectoryExists(const char* CD);
int CREATE_DIR(const char* name);
int IS_PROGRAM(const char* name);

int main() {

  char input[100];
  char* CURRENT_DIR = "";
 
  while (1) {
    start:
    if (CURRENT_DIR == "") printf("$ ");
    else printf("%s: ", CURRENT_DIR);
    
    //Flush our input
    fflush(stdout);
    
    fgets(input, 100, stdin);
    
    int n = strlen(input);
    
    input[n - 1] = '\0';
    
    //Exit command
    if (!strcmp(input, "exit")) exit(0);

    //Echo Command
    else if (strncmp(input, "echo", 4) == 0) {
        char *message = input + 4;
        while (*message == ' ') message++;

        printf("%s\n", message);
      }

    //Type Command
    else if (strncmp("type", input, 4) == 0) {
      char builtins[][16] = {"echo", "type", "exit"};
      char *arguments = input + 4;
      while (*arguments == ' ') arguments++;

      for (size_t i = 0; i < sizeof(builtins) / 16; i++) {
        if (strcmp(builtins[i], arguments) == 0) {
          printf("%s is a shell builtin\n", arguments);
          goto start;
        }
      }

      char *path = getenv(arguments);
      if (path) {
        printf("%s is %s\n", arguments, path);
      }
      else if (strncmp("./", input, 2 == 0)) {
        char *name = input + 2;

       

      }else {
      //If nothing is found (type CMD)
      printf("%s not found\n", arguments);
      }

    } 

  }

  return 0;
}

int DirectoryExists(const char* CD) {

  const char* folder;
  folder = CD;
  struct stat sb;

  if (stat(folder, &sb) == 0 && S_ISDIR(sb.st_mode)) {
    return 1;
  } else {
      return 0;
  } 
  return 0;
}

int CREATE_DIR(const char* name) {
  #ifdef __linux__
       mkdir(name, 0777); 
   #else
       _mkdir(name);
   #endif
  return 1;
}

int IS_PROGRAM() {



  return 0;
}