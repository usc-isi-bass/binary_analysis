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
    char a[200],b[200];
    gets(a);
    int n=strlen(a);
    int i,flag=0,t=0;
    for(i=0;i<n;i++)
    {
        if((a[i]==' ')&&t==0)

           {b[flag++]=a[i];t=1;}
           else if(a[i]!=' ')
           {b[flag++]=a[i];t=0;}
           else if(a[i]==' '&&t!=0)
           continue;

    }
    for(i=0;i<flag;i++)
    printf("%c",b[i]);
}
