#include <unistd.h>

int read_str_from_socket(int socket_fd, char *buf, int bufsize)
{
    char *ptr;
    int nread, nleft, rc;
    int rsize;

    // read the amount of sent data 
    if ((rc = read(socket_fd, &rsize, sizeof(rsize))) < 0)
        return -1;
    else if (rc == 0)
        return 0;

    // read data
    ptr = buf;
    nleft = rsize;
    while (nleft > 0 ) {
      if ((nread = read(socket_fd, ptr, nleft)) <= 0)
        return -1;
      nleft -= nread;
      ptr += nread;
    }

    *ptr = '\0';

    return rsize;
}