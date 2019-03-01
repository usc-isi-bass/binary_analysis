#include <stdio.h>

/**
 *  read 'len' of bytes to 'buf', from 'fp' at 'offset'
 */ 
static void read_from_file(FILE *fp, unsigned int offset, unsigned char *buf, int len)
{
    if(fseek(fp, offset, SEEK_SET)) {
        memset(buf, 0, len);
        return;
    }
    if(!fread(buf, 1, len, fp)) {
        memset(buf, 0, len);
        return;
    }
}
