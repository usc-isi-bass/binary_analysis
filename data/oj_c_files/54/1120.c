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

int minnum(int n,int k)
{
	int i=1;
	double a;
	while(1)
	{
		int x=1;
		a=i*n+k;
		while(x<n)
		{
			a=a*n/(n-1)+k;
			x++;
			if((int)a!=a){
				break;
			}
		}
		i++;
		if((long)a==a){
			break;
		}
	}
	return a;
}
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	int sum;
	sum=minnum(n,k);
	printf("%d\n",sum);
	return 0;
}