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
	int a,d=1;
	int b[25],c[25];
	int i,j;
	scanf("%d",&a);
    for(i=0;i<a;i++)
		scanf("%d",&b[i]);
	for(i=0;i<a;i++)
		c[i]=b[i];
	for (i=1;i<a;i++)
    {
             for (j=d-1;j>=0;j--)
             {
                       if (b[i]<=c[j])
                       break;
             }
             c[j+1]=c[i];
             if (j==d-1)
             d++;
     }
     printf("%d",d);

}