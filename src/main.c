#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
#include <sys/stat.h>

#include "exit.h"
#include "echo.h"
#include "type.h"

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

    //Begin parsing the command

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

    //MKDIR
    else if (strncmp("MKDIR", input, 5) == 0) {
      char *arguments = input + 5;
      while (*arguments == ' ') arguments++;
      
    }
    

    //Command not found
    else {
      printf("%s : Command not found", input);
    }

  }

  return 0;
}