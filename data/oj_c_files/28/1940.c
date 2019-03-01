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
    int num=0,i;
    char a[10000];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=' ')
        {
            num++;
            if(i==strlen(a)-1)
            {
                printf("%d",num);
            }
        }
        else if(a[i]==' '&&a[i+1]!=' ')
        {
            printf("%d,",num);
            num=0;
        }
    }   
   return 0;
}
