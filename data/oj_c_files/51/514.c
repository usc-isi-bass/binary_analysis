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
	int n,i,l,j,e,c[600]={0},m,d=0,f=0;
	char a[600],b[600][5];
	scanf("%d",&n);
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
		b[i][n]='\0';
	}
	for(i=0;i<=l-n;i++)
	{
		for(j=i+1;j<=l-n;j++)
		{
			e=strcmp(b[i],b[j]);
			if(e==0)
			{
				c[i]++;
			}
		}
	}
	m=c[0];
	for(i=0;i<=l-n;i++)
	{
		if(c[i]>m) m=c[i];
	}
	if(m==0) printf("NO");
	else
	{
		printf("%d\n",m+1);
		for(i=0;i<=l-n;i++)
		{
			if(c[i]==m)
			{
				printf("%s\n",b[i]);
			}
		}
	}
	return 0;
}





