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

void a(int s[],int x)
{
	int i;
	for(i=1;i<=x;i++)
	scanf("%d",&s[i]);
}
void b(int s[],int x)
{	int i,j;
	for(i=1;i<=x-1;i++)
	{
		for(j=1;j<=x-i;j++)
		{
			if(s[j]>s[j+1])
			{
				s[0]=s[j];
				s[j]=s[j+1];
				s[j+1]=s[0];
			}
		}
	}
}
void c(int p[],int x,int q[],int y)
{
	int i;
	for(i=1;i<=y;i++)
		p[x+i]=q[i];
}
void d(int s[],int x)
{
	int i;
	for(i=1;i<=x-1;i++)
		printf("%d ",s[i]);
	printf("%d\n",s[x]);
}
void main()
{
	int p[60],q[30],m,n;
	scanf("%d%d",&m,&n);
	a(p,m);
	a(q,n);
	b(p,m);
	b(q,n);
	c(p,m,q,n);
	d(p,m+n);
}