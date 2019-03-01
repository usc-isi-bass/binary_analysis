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
	int i,flag=1;
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
void main()
{
	int n,i;
	scanf("%d",&n);
	if(n<=4) printf("empty\n");
	else
	{
		for(i=3;i<n-1;i++)
			if(sushu(i)+sushu(i+2)==2)
				printf("%d %d\n",i,i+2);
	}
}