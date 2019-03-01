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

int main(){
	int m;
	scanf("%d",&m);
	int i;
	for(i=0;i<m;i++)
	{
		int n;
		scanf("%d",&n);
		int a=2,b=1,k,e;
		double sum=0;
		for(k=1;k<=n;k++)
		{
			sum+=(double)a/b;
			e=a;
			a=a+b;
			b=e;
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}