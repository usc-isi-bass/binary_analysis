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


void main()
{
	int n,i,a;
	scanf("%d", &n);
	int num[5];
	a=100000;
	for(i=0;i<=4;i++)
	{
		a=a/10;
		num[i]=(n/a)%10;
	}
	if(num[0]!=0)
	{
		printf("%d%d%d%d%d",num[4],num[3],num[2],num[1],num[0]);
	}
	else if(num[1]!=0)
	{
		printf("%d%d%d%d",num[4],num[3],num[2],num[1]);
	}
	else if(num[2]!=0)
	{
		printf("%d%d%d",num[4],num[3],num[2]);
	}
	else if(num[3]!=0)
	{
		printf("%d%d",num[4],num[3]);
	}
	else printf ("%d",num[4]);
}