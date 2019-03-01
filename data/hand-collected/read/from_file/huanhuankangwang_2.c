
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

int read_from_file(const char *filename,const char *readBuf,int maxlen)
{
    int ret,fd;
    if(filename == NULL || readBuf == NULL)
        return 0;
    fd = open(filename,O_RDONLY);
    if(fd <0){
        return -1;
    }
    ret = _read_fd(fd,readBuf,maxlen);

    close(fd);

    return ret;
}