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
	int convert(int *,int n,int m);
	int c,*p,i,j,n,m,a[5][5];
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
	scanf("%d %d",&n,&m);
    p=&a[0][0];
	c=convert(p,n,m);
    if(c==0) printf("error");
	if(c==1)
	{
		for(i=0;i<5;i++)
		{
			for(j=0;j<4;j++)
			{
				printf("%d ",a[i][j]);
			}
			if(i!=4)
			printf("%d\n",a[i][4]);
			else
				printf("%d",a[i][4]);
		}
	}
	return 0;
}
int convert(int *p,int n,int m)
{
	int t,j;
	if(n>4||m>4||n<0||m<0) return 0;
	else
	{
		for(j=0;j<5;j++)
		{
			t=*(p+5*n+j);
			*(p+5*n+j)=*(p+5*m+j);
			*(p+5*m+j)=t;
		}
	  return 1;
	}
}