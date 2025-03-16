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
      char builtins[][16] = {"echo", "type", "exit", "cd", "ls", "cat", "mkdir", "pwd"};
      char *arguments = input + 4;
      while (*arguments == ' ') arguments++;

      //If we could not find type as a system path check if we have a shell builtin
      for (size_t i = 0; i < sizeof(builtins) / 16; i++) {
        if (strcmp(builtins[i], arguments) == 0) {
          printf("%s is a shell builtin\n", arguments);
          goto start;
        }
      }
      //check if type is a path
      char *path = getenv(arguments);
      if (path) {
        printf("%s is %s\n", arguments, path);
      }else {
      //If nothing is found (type CMD)
      printf("%s not found\n", arguments);
      }

    } 

    /*
    FILE SYSTEM INTERFACE
    _____________________
    _____________________
    _____________________
    */
    //CD
    else if (strncmp("cd", input, 2) == 0) {
      char *arguments = input + 2;
      while (*arguments == ' ') arguments++;

      if (DirectoryExists(arguments) == 1) {
          CURRENT_DIR = arguments;
      } else {
          fprintf(stderr, "%s: Directory not found\n", arguments);
      }
      goto start;
    }

    //PWD
    else if (strncmp("pwd", input, 3) == 0) {
      printf("Current PATH \n_____________\n%s\n\n",CURRENT_DIR);
      goto start;
    }

    //LS
    else if (strncmp("ls", input, 2) == 0) {
      //Loop through files and directories

    }

    //mkdir
    else if (strncmp("mkdir", input, 4) == 9) {
      char *arguments = input + 4;
      while (*arguments == ' ') arguments++;
        char *FOLDER_PATH = CURRENT_DIR;
        strcat(FOLDER_PATH, arguments);
        CREATE_DIR(FOLDER_PATH);
        goto start;
    }

    //cat
    else if (strncmp("cat", input , 3) == 0) {
      char *arguments = input + 3;
      while (*arguments == ' ') arguments++;

      size_t path_size = strlen(CURRENT_DIR) + strlen(arguments) + 2;
      char* FILE_PATH = (char*)malloc(path_size);
      if (FILE_PATH == NULL) {
          fprintf(stderr, "Memory allocation failed\n");
          goto start;
      }
      
      #ifdef _WIN32
      snprintf(FILE_PATH, path_size, "%s\\%s", CURRENT_DIR, arguments);
      #endif
      #ifdef __linux__
      snprintf(FILE_PATH, path_size, "%s/%s", CURRENT_DIR, arguments);
      #endif
      
      // Open the file
      FILE* file = fopen(FILE_PATH, "r");
      if (file == NULL) {
          fprintf(stderr, "%s: Not found\nDir\n______\n%s", arguments,FILE_PATH);
      } else {
          char ch;
          while ((ch = fgetc(file)) != EOF) {
              putchar(ch);
          }
          fclose(file);
      }
  
      free(FILE_PATH);
  }

    //Invalid command
    else fprintf(stderr, "%s: command not found\n", input);
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