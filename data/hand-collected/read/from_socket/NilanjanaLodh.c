#include <unistd.h>
#include <string.h>

int read_from_socket(int sockfd , char buf[256])
{

    bzero(buf, 256);
    int n = read(sockfd,buf,255);

    if(n<0)
        return -1;
    return n;

}