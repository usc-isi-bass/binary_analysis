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
	int n,i;
	char a[200]={'0'},b[200]={'0'};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char c[200]={'0'};
		int lena,lenb;
		int d,j;
		scanf("%s",a);
		scanf("%s",b);
		lena=strlen(a);
		lenb=strlen(b);
		d=lena-lenb;
		for(j=lena-1;j>=d;j--)
		{
			b[j]=b[j-d];
			b[j-d]='0';
		}
		for(j=0;j<d;j++) b[j]='0';
		for(j=lena-1;j>=0;j--)
		{
			if(a[j]>=b[j])
				c[j]=a[j]-b[j]+'0';
			else
			{
				c[j]=a[j]-b[j]+10+'0';
				a[j-1]-=1;
			}
		}
		for(j=0;j<lena;j++)
			printf("%c",c[j]);
		printf("\n");
	}
return 0;
}