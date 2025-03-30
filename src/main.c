#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

#include "exit.h"
#include "echo.h"
#include "type.h"
#include "mkdir.h"
#include "cd.h"

int main() {

  char input[100];
  char* CURRENT_DIR = "/";
 
  while (1) {
    start:
    if (CURRENT_DIR == "") printf("$ ");
    else printf("%s: ", CURRENT_DIR);
    
    //Flush our input
    fflush(stdout);
    
    fgets(input, 100, stdin);
    
    int n = strlen(input);
    
    input[n - 1] = '\0';
    
    //Exit
    if (!strcmp(input, "exit")) {
      EXIT_COMMAND();
    }

    //Echo
    else if (strncmp(input, "echo", 4) == 0) {
        char *message = input + 4;
        while (*message == ' ') message++;
        ECHO_COMMAND(message);
      }

    //Type
    else if (strncmp("type", input, 4) == 0) {
      char *arguments = input + 4;
      while (*arguments == ' ') arguments++;
      TYPE_COMMAND(arguments);
    }

    //Mkdir
    else if (strncmp("mkdir", input, 5) == 0) {
      char *arguments = input + 5;
      while (*arguments == ' ') arguments++;
      MKDIR_COMMAND(arguments, CURRENT_DIR);
    }

    //cd 
    else if (strncmp("cd", input, 2) == 0) {
      char *arguments = input + 2;
      while (*arguments == ' ') arguments++;
      CD_COMMAND(arguments, &CURRENT_DIR);
    }
    //Command not found
    else {
      printf("%s : Command not found", input);
    }

  }

  return 0;
}