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
	int k,n,i,j;
	double x[100][1000],a,s[100]={0},*px,*ps;
	px=x[0];
	ps=s;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		a=0;
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",((px+i)+j));
		}
		for(j=0;j<n;j++){
			a=a+*((px+i)+j);
		}
		a=a/n;
		for(j=0;j<n;j++){
			*(ps+i)=*(ps+i)+(*((px+i)+j)-a)*(*((px+i)+j)-a);
		}
		*(ps+i)=*(ps+i)/n;
		*(ps+i)=sqrt(*(ps+i));
	}
	for(i=0;i<k;i++){
		printf("%.5lf\n",*(ps+i));
	}
	return 0;
}