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
    char a[300],i,p=0;
    scanf("%s",a);
    for(i='A';i<='Z';i++)
    {
        int j,s=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]==i)
            {
                s++;
            }
        }
        if(s!=0)
        {
            printf("%c=%d\n",i,s);
            p=1;
        }
    }
    for(i='a';i<='z';i++)
    {
        int j,s=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[j]==i)
            {
                s++;
            }
        }
        if(s!=0)
        {
            printf("%c=%d\n",i,s);
            p=1;
        }
    }
    if(p==0)
    {
        printf("No");
    }
    return 0;
}