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

int main()
{
	int m,i,j,n,x,y,temp;
	double sum,a,b;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n);
		sum=0.0;
		x=1,y=2;
		for(j=1;j<=n;j++){
			sum=sum+(double)y/x;
			temp=x;
			x=y;
			y=x+temp;
		}
		printf("%.3lf\n",sum);
	}
	return 0;
}