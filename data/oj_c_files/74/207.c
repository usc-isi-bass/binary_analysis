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

int i;
int sushu(int x)
{
	for(i=2;i<x/2;i++)
		if(x%i==0)break;
	if(i>=x/2)return(1);
	else return(0);
}
int huiwen(int p)
{
	int s[10],k,d,t=0;
	d=p;
	for(i=0;p!=0;i++)
	{
		s[i]=p%10;
		p/=10;
	}
	for(k=0;k<i;k++)
		t=t*10+s[k];
	if(d==t)return(1);
	else return(0);
}
main()
{
	int n,m;
	scanf("%d %d",&m,&n);
	for(;m<=n;m++)
	{	
		if(sushu(m)&&huiwen(m))
			{
				printf("%d",m);
				break;
			}
	}
	if(m>n)printf("no");
	m++;
	for(;m<=n;m++)
		if(sushu(m)&&huiwen(m))printf(",%d",m);
}