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

int sushu(int n)
{
	int i;
	int flag=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0) 
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int main()
{
	int m,i;
	scanf("%d",&m);
    for(i=3;i<=m/2;i=i+2)
	{
		if(sushu(i)&&sushu(m-i))
		{
			printf("%d %d\n",i,m-i);
		}
	}
	return 0;
}