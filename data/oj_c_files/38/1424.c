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

void display(double n)
{
	double *index,ave,ele[1000],sum=0,answer;
	int i=0;
	index=ele;
	for(i=0;i<n;i++,index+=LEN)
	{
		scanf("%lf",index);
		sum+=*index;
	}
	ave=sum/n;
	sum=0;
	for(i=0,index=ele;i<n;index+=LEN,i++)
	{
		sum+=pow(*index-ave,2);
	}
	sum=(double)sum/n;
	answer=pow(sum,0.5);
	printf("%.5f",answer);
}


double main()
{
	double k,n,i;
	scanf("%lf",&k);
	for(i=0;i<k;i++){
		scanf("%lf",&n);
		if(i!=0) printf("\n");
		display(n);
	}
	return 0;
}

