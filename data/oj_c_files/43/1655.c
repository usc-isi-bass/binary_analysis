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

int sushu(int n);
int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
	{
		if(sushu(i) && sushu(m-i))
		printf("%d %d\n",i,m-i);
	}
	return 0;
}

int sushu(int n)
{
	int i,k;
	k=sqrt(n);
	for(i=3;i<=k;i=i+2)
	if(n%i==0)
	return 0;
	return 1;
}