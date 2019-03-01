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
    char a[200];
    gets(a);
    int len=strlen(a);
    int i,j=0,flag=0;
    for(i=0;i<len;i++)
    {
        if(a[i]!=' ')
        {
            flag=0;
            printf("%c",a[i]);
        }
        else if(a[i]==' ')
        {
            if(flag==0)
            {
                flag=1;
                printf(" ");
            }
            else continue;
        }
       }


    printf("\n");
}
