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
	char a[512],b[512],c[512],d[512];
	int i,len,k,j;
	gets(a);
	len=strlen(a);
	for(i=1;i*2<=len;i++)
	{
		k=0;
		for(j=0;j+2*i<=len;j++)
		{
			for(k=0;k<i;k++)
			{
				b[k]=a[j+k];
				b[2*i-1-k]=a[j+2*i-1-k];
				c[k]=a[j+k];
				d[k]=a[j+2*i-1-k];
			}
			b[2*i]=0;
			c[i]=0;
			d[i]=0;
			if(!strcmp(c,d))
				printf("%s\n",b);
		}
	}
	return 0;
}