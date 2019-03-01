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
    char s[400],c1;
    int top=0,i,j,k,m,n,a[100];
    gets(s);
    c1=s[0];
    for (i=0;i<strlen(s);i++)
    {
        if (s[i]==c1) 
        {
           top++;
           a[top]=i;
        }
        else 
        {
             printf("%d %d\n",a[top],i);
             top--;
        }
    }
    return 0;
}
