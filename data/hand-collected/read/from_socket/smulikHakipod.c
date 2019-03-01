#include <sys/socket.h>

void read_from_socket(int socketfd, void *buff, unsigned int length)
{
    int n;
    n = recv(socketfd, buff, length, MSG_WAITALL);
    if (n < 0)
    {
        exit(1);
    }
    
}