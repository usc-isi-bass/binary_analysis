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

int sushu(int x)
{
	int k=0;
	{	for(k=2;k<=x/2;k++)
		if(x%k==0)
			return 0;}
	return 1;
}
void main()
{
	int a=0,b=0,n=0,i=0,m=0;
	scanf("%d",&n);
	for(i=3;i<=n-2;i++)
	{	if(sushu(i)==1&&sushu(i+2)==1)
		{	printf("%d %d\n",i,i+2);
		m=1;}
	}
    if(m==0)
		printf("empty");
}