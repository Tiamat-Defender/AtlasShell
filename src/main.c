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
#include "ls.h"
#include "rm.h"
#include "man.h"


int main() {

  char input[100];
  const char* CURRENT_DIR = "/";
 
  while (1) {
    start:

    printf("%s: ", CURRENT_DIR);
    
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

    //ls
    else if (strncmp("ls", input, 2) == 0) {
      char *arguments = input + 2;
      while (*arguments == ' ') arguments++;
      LS_COMMAND(CURRENT_DIR);
    }
    
    //rm
    else if (strncmp("rm", input, 2) == 0) {
      char *arguments = input + 2;
      while (*arguments == ' ') arguments++;
      RM_COMMAND(arguments);

    }

    //man
    else if (strncmp("MAN", input, 3) == 0) {
      char *arugment = input + 3;
      while (*arugment == ' ') arugment++;

    }

    //Command not found
    else {
      printf("%s : Command not found", input);
    }

  }

  return 0;
}