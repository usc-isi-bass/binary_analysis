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
 int n,t=1,i,j,a[10000];
 char c[100000];
 gets(c);
 for (i=0;c[i]!=' '&&c[i]!='\0';i++)
 a[0]=i+1; 
 for (i=1;c[i]!='\0';i++)
    {
     if (c[i-1]==' '&&c[i]!=' ')
	 {for (j=i;c[j]!=' '&&c[j]!='\0';j++)
	 {
	 }      
	   a[t]=j-i;
	   t++;}
    }
 for (i=0;i<t-1;i++)
    { printf ("%d,",a[i]);}
printf ("%d",a[t-1]);
}
