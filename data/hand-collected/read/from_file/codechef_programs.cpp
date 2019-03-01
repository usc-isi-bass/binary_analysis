#include<stdio.h>
inline int read_int()
{
    int ret = 0;
    register int c = getchar_unlocked();
    
    while(c<'0' || c>'9')
        c = getchar_unlocked();
    while(c>='0' && c<='9')
    {
        ret = (ret<<3) + (ret<<1) + c - '0';
        c = getchar_unlocked();
    }
        return ret;
}