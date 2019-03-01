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
    int i,n,num=0,len;
    char s[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",s);
        len=strlen(s);
        if(num==0)
        {
            printf("%s",s);
            num=len;
            continue;
        }
       if(num+len<80)
       {
           printf(" %s",s);
           num=num+len+1;
           continue;
       }
       if(num+len>=80)
       {
           printf("\n%s",s);
           num=len;
           continue;
       }
    }
    return 0;
}
