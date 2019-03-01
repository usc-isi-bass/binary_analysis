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

struct yasuo
{
	char d;
	int m;
}b[1010];
int main()
{
	int n,i,k=0;
	char a[1010];
	gets(a);
	n=strlen(a);
	for(i=0;i<=n-1;i++)
         {         
                   if(a[i]>=97)
                       a[i]=a[i]-32; 
          }
	for (i=0;i<=n-1;i++)
	{
		b[k].d=a[i];
		b[k].m=1;
		while(a[i+1]==a[i])
		{
			b[k].m++;
			i++;
		}
		k++;
	}
	for(i=0;i<=k-1;i++)
	{
	    printf("(%c,%d)",b[i].d,b[i].m);
	}
	return 0;
}
