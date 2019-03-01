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
	int s=1,i;
	for(i=3;i<=sqrt(n);i+=2)
	{
		if(n%i==0)
			s=0;
	}
	return s;
}
	
void main()
{
	int i,j,m;
	scanf("%d",&m);
	for(i=3;i<=m/2;i+=2)
	{
		if (sushu(i)==1 && sushu(m-i)==1)
		{
			printf("%d %d\n",i,m-i);
		}
	}
}
