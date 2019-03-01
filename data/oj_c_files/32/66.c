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

struct minus
{
	char a[N];
	char b[N];
};
int main()
{
	struct minus c[N];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i].a);
		scanf("%s",c[i].b);
		printf("\n");
	}
	for(i=0;i<n;i++)
	{
		int k1,k2,j,k;
		char str[N],d;
		k1=strlen(c[i].a);
		k2=strlen(c[i].b);
		for(j=k1-1,k=k2-1;j>=k1-k2,k>=0;j--,k--)
		{
			d=c[i].a[j]-c[i].b[k]+'0';
			if(d>='0')
				str[j]=d;
			else
			{
				str[j]=10+d;
				c[i].a[j-1]=c[i].a[j-1]-1;
			}
		}
		//printf("%c",c[i].a[k1-k2-1]);
		for(j=0;j<k1-k2;j++)
		{
			str[j]=c[i].a[j];
		}
		str[k1]='\0';
		printf("%s",str);
		printf("\n");
	}
	return 0;
}