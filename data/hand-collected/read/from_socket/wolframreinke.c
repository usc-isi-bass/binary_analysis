#include <sys/socket.h>
#include <unistd.h>


int
select_socket_fd (int fd, int maxtime, int writep)
{
  fd_set fds, exceptfds;
  struct timeval timeout;

  FD_ZERO (&fds);
  FD_SET (fd, &fds);
  FD_ZERO (&exceptfds);
  FD_SET (fd, &exceptfds);
  timeout.tv_sec = maxtime;
  timeout.tv_usec = 0;

  return select (fd + 1, writep ? NULL : &fds, writep ? &fds : NULL,
                 &exceptfds, &timeout);
} /* end of select_socket_fd */


int
read_from_socket (int fd, char *buf, int len, int timeout)
{
  int res;

  do {
    if (timeout > 0) {
      do {
        res = select_socket_fd (fd, timeout, 0);
      } while (res == -1 && errno == EINTR);
      if (res <= 0)  {
        return SOCKET_TIMEOUT;
      } /* end if */
    } /* end if */
    res = read(fd, buf, len);
  } while (res == -1 && errno == EINTR);

  return res;
} /* end of read_from_socket */
