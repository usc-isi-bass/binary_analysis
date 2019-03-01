#include <sys/socket.h>
#include <stdlib.h>

#define MAX_MESSAGE_LENGTH 500


char *read_from_socket(int socket) {
  int result;
  char *temp_buffer = malloc(sizeof (char) *MAX_MESSAGE_LENGTH);

  result = recv(socket, temp_buffer, MAX_MESSAGE_LENGTH, 0);
  if(result > 1) return temp_buffer;
  else return "";
}