#include <stdio.h>
#include <stdlib.h>

#define MAX_STRING_SIZE 512

int read_from_socket(int sockfd, char* str){
    FILE* fp = fdopen(sockfd, "r");
  int allocated = 0;
  if(str == NULL){
    str = (char*) malloc(sizeof(char) * MAX_STRING_SIZE);
    allocated = 1;
  }
  do {
    memset(str, 0, MAX_STRING_SIZE);
    str = fgets(str, MAX_STRING_SIZE, fp);
    printf("%s", str);
}  while (!('1' <= str[0] && str[0] <= '5') || str[3] != ' ');
  char reply_series = str[0];
  if(allocated)
    free(str);
  return (reply_series > '4');
}
