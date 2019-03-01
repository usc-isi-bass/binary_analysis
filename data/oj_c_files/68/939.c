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
	int i,j;
	double h;

	if(n==2) return 1;
	h=sqrt(n)+1;
	j=(int)h;
	for(i=3;i<=j;i=i+2)
	{
		if(n%i==0) 
		return 0;
	}
	return 1;
}
int main()
{
	int n,i;
	int m;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(m=3;m<=i/2;m=m+2)
		{	if(sushu(m)&&sushu(i-m))
			{
				printf("%d=%d+%d\n",i,m,i-m);
				break;
			}
		}
	}
	return 0;

}
