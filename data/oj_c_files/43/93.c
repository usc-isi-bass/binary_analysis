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

int sushu(int t)
{
	int r,cnt=0;
	r=(int)sqrt(t);
	for(int i=1;i<=r;i++)
	{
		if(t%i==0)
			cnt++;
	}
	if(cnt==1)
	{
		return t;
		cnt=0;
	}
	else
	{
		return 0;
		cnt=0;
	}
}
int main()
{
	int m,i,j;
	scanf("%d",&m);
	for(i=3;i<=(int)(m/2);i=i+2)
	{
        j=m-i;
		if(sushu(i)==i&&sushu(j)==j)
			printf("%d %d\n",i,j);
	}
	getchar();
	getchar();
}
