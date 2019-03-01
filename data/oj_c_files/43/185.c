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

int main ()
{
	int m,a,i;
	int sushu(int m);
	int jishu(int m);
	scanf("%d",&m);
	for(i=1;i<=(m/2);i++)
	{
		if(sushu(i)&&jishu(i))
		{
			a=m-i;
			if(sushu(a)&&jishu(a))
				printf("%d %d\n",i,a);
		}
	}
	return 0;
}
int sushu(int m)
{
	int t,c,k;
	k=sqrt(m);
	for(t=2;t<=k;t++)
		if(m%t==0)break;
		if(t>k) c=1;
		else c=0;
		if(m<3)
			c=0;
		return(c);
}
int jishu(int m)
{
    int d;
    if(m%2==0)
		d=0;
	else
		d=1;
	return(d);
}
