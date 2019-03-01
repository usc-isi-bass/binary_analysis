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
	int i,k;
	k=sqrt(a);
	for(i=2;i<=k;i++)
		if(a%i==0)
			break;
	if(i>k) return 1;
	else return 0;
}

void main()
{
	int n,i,mark=0;
	scanf("%d",&n);
	for(i=3;i<n;i=i+2)
	{
		if(sushu(i)==1)
		{
			if(i+2>n)
				break;
			else if(sushu(i+2)==1)
			{
				printf("%d %d\n",i,i+2);
				mark=1;
			}
		}
	}
	if(mark==0)
		printf("empty");
}
