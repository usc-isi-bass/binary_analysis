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
	int n,i,j,len1,len2;
	char a[1000],b[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %s",a,b);
		len1=strlen(a);
		len2=strlen(b);

		for(j=0;j<len2;j++)
		{
			if(a[len1-1-j]-b[len2-1-j]>=0)
				a[len1-1-j]=a[len1-1-j]-b[len2-1-j]+'0';

			else if(a[len1-1-j]-b[len2-1-j]<0)
			{
				a[len1-1-j]=a[len1-1-j]+10-b[len2-1-j]+'0';
				a[len1-2-j]=a[len1-2-j]-1;
			}
		}
		printf("%s\n",a);
	}
}
