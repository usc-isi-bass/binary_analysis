#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int _read_fd(int fd,const char *buf,int maxsize)
{
    int len;
    int ret = 0;
    do{
        len = read(fd,buf,maxsize);
        if(len < 0)
        {
            return -1;
        }
        if(len == 0)
            break;
        buf += len;
        maxsize -= len;
        ret += len;
    }while(maxsize > 0);

    return ret;
}