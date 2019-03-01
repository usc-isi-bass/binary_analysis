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
	int n,i,j,x,y;
	char a[100],b[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		x=strlen(a);
		y=strlen(b);
		for(j=y-1;j>=0;j--)
		{
			if(a[x-y+j]<b[j])
			{
				a[x-y+j]=a[x-y+j]+10-b[j]+48;
				a[x-y+j-1]-=1;
			}
			else
				a[x-y+j]=a[x-y+j]-b[j]+48;
		}
		printf("%s\n",a);
	}
	return 0;
}