#include <sys/socket.h>

int read_from_socket (int sd, char* buffer, int num_bytes){

  int ret, offset = 0;

  while (num_bytes > 0){
    ret = recv(sd, buffer, num_bytes, 0);
    if (ret <= 0)
      return ret;
    num_bytes = num_bytes - ret;
    offset = offset + ret;
  }
  
  return offset;
}