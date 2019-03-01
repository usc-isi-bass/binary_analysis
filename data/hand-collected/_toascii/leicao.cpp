#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <sys/time.h>

int generate_str(unsigned long src, char* buf, const unsigned long bits)
{
    if (buf == NULL)
    {
        return -1;
    }


    char tmp[bits+1];
    memset(tmp, 0, bits+1);
    char c;
    int i;
    unsigned char len = 0;
    for (i = 0; src; src/=10, ++i)
    {
        tmp[i] = src%10 + '0';
    }
    
    len = strlen(tmp);
    for (i = 0; i < len/2; ++i)
    {
        c = tmp[i];
        tmp[i] = tmp[len-i-1];
        tmp[len-i-1] = c;
    }
    
    memset(buf, 0, bits+1);
    memset(buf, '0', bits);
    memcpy(buf+bits-len, tmp, len);

    return 0;
}