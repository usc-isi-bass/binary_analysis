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

void main()
{
    int i,j;
    char a[30],b[30];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    if(a[i]>47&&a[i]<58)
    {memset(b,0,20);
    	for(j=0;a[i]>47&&a[i]<58;i++,j++)
    	b[j]=a[i];
        puts(b);

    }
}