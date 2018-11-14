#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

char ** parse_args( char * line ){
  char ** output = malloc(10*sizeof(char *));
  int num_args = 0;
  char * old = NULL;

  while(line){
    old = line;
    strsep(&line," ");
    output[num_args] = old;
    num_args++;
  }

  return output;
}

int main() {
  char input[100] = "ls -l --all --color";
  char ** args = parse_args(input);

  execvp(args[0],args);
  return 0;
}
