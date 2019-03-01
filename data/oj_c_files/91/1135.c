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
    int i=1,n;
    char q[100];
	int p[100],t[100];
    char s[100];
    s[0]=getchar();
    t[0]=s[0];
    while ((s[i]=getchar())!='\n')
    {
		   t[i]=s[i];
		   p[i-1] =t[i]+t[i-1];
           i++;
    }
    n=i;
    p[n-1]=t[0]+t[n-1];
    for (int j=0;j<n;j++)
    {
       putchar(p[j]);
    }
    return 0;
} 