#include <sys/socket.h>

void read_from_socket(int socket, unsigned int x, void* buffer, int retries) {
  int bytes_read = 0;
  int result;

  if(retries > 5) {
    close(socket);
    return;
  }
  result = read(socket, buffer, x);
  if (result < 1 ) {
    read_from_socket(socket, x, buffer, retries++);
  }
}