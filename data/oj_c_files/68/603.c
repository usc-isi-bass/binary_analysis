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

int sushu(int a)
{
int i,m;
if(a==2||a==3)
	{	
	return(1);
	}
else
{
m=sqrt(a);
for(i=2;i<=m;i++)
	{
	if(a%i==0)
	break;
	}
	if(i>m)
	return(1);
	else
	return(0);
}
}
void main()
{
	int n,j,k,d,e;
	scanf("%d",&n);
	for(j=6;j<=n;j=j+2)
	{
	for(k=2;k<j;k++)
		{
		d=sushu(k);
		e=sushu(j-k);
		if(d==1&&e==1)
			{
			printf("%d=%d+%d\n",j,k,(j-k));
			break;
			}
		}
	}
}