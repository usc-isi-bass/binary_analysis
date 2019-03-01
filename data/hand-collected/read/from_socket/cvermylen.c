#include <sys/socket.h>

int read_from_socket(int fd, char* buffer, int max_size)
{
    int n = recv(fd, buffer, max_size, 0);
    return n;
}