#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
    int i,len=0;
    char str[32],temp[32];
    char *ptr;
    cin.getline(str,31);
    ptr=str;
    for(;*ptr!='\0';++ptr)
    {
        if(isdigit(*ptr)) len++;
        else
        {
            memset(temp,0,sizeof(temp));
            if(len==0) continue;
            for(i=0;i<len;++i) temp[len-i-1]=*(ptr-i-1);
            len=0;
            cout<<atoi(temp)<<endl;
        }
    }
    if(len)
    {
        for(i=0;i<len;++i) temp[len-i-1]=*(ptr-i-1);
        cout<<atoi(temp)<<endl;
    }
    return 0;
}
