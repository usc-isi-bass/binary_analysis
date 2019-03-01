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


int ref(int num);

int main()
{
	int n,i,sum=0;

	scanf("%d",&n);

	for(i=1;i<=n;i++)
		sum+=ref(i)*ref(i);

	printf("%d",sum);

	return 0;
}

int ref(int num)
{
	if((num%10==7)||(num/10==7)||(num%7==0))
		return 0;
	return num;
}