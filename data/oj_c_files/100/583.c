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
    char s[300];
    scanf("%s",s);
    int len,i,j,k,w,count[26]={0};
    len=strlen(s);
    w=0;
    for(i=0;i<26;i++)
    {
        for(j=0;j<len;j++)
        {
            if(s[j]==('a'+i)) count[i]++;
        }
        if(count[i]!=0) w=1;
    }
    if(w==0) printf("No");
    if(w==1)
    {
        for(i=0;i<26;i++)
        {
            if(count[i]!=0)
            {
                printf("%c=%d\n",'a'+i,count[i]);
            }
        }
    }
    return 0;
}
