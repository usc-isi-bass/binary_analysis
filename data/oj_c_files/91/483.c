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
    int n,i,j;
    char a[105],b[105];
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(i==strlen(a)-1)
        {
            b[i]=a[i]+a[0];
        }
        else
            b[i]=a[i]+a[i+1];
    }
    b[strlen(a)]='\0';
        puts(b);
  
    return 0;
}
