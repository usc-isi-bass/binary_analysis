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
    char str[100000];
    char *p;
    int n,i;
    scanf("%d",&n);
    gets(str);
    for (i=0;i<n;i++)
    {	
		int times[256]={0};
        gets(str);
        p=str;
        while('\0'!=*p)
        {
             times[*p]++;
             p++;
        }
        p=str;
        while('\0'!=*p)
        {
             if(1==times[*p])
             {
                printf("%c\n",*p);
                break;
              }
			 p++;
        }
        if ('\0'==*p)
           printf("no\n");
     }
     return 0;
}