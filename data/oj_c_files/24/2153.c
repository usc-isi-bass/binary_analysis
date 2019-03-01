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
	char a[200][50];
	int n,i,j,q=0,k;
	int r[200]={0};
	int b[200]={0};
	char c;
	for(i=0;i<=199;i++)
	{
		scanf("%s",a[q]);
		c=getchar();
		if(c=='\n') {break;}
		q++;
	}
	for(j=0;j<q+1;j++)
	{r[j]=strlen(a[j]);
	 b[j]=r[j];
	}
	for(int x1=0;x1<=q-1;x1++)
	{
		for(int x2=x1;x2<=q;x2++)
		{
			if(r[x1]<r[x2])
			{
			    k=r[x1];
				r[x1]=r[x2];
				r[x2]=k;
			}
		}
	}
	for(int w=0;w<=q;w++)
	{
		if(b[w]==r[0])
			{printf("%s\n",a[w]);
		break;}
	}
	for(int e=0;e<=q;e++)
	{
		if(b[e]==r[q])
		{printf("%s",a[e]);
		break;}
	}
	return 0;
}