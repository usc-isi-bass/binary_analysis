#include <errno.h>
#include <sys/socket.h>

ssize_t read_from_socket(int socket, char* buffer, size_t count){
    ssize_t ret = 0;

    while (ret < (ssize_t)count) {
      ssize_t len = read(socket, buffer + ret, count-ret);
      if (len == 0) {
        break;
      } else if (len == -1 && errno == EINTR) {
        errno = 0;
        continue;
      } else if (len == -1 && errno != EINTR) {
        // other error 
        return -1;
      }
      ret += len;
    }

    return ret;
}