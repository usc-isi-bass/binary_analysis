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

int main(int argc, char* argv[])
{
	double num[100];
	int m,i,j;
	double p;
	double sum;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%lf",&num[i]);
	}
	for(i=0;i<m;i++){ 
		sum=0;
		 p=1;
		for(j=0;j<num[i];j++){
		  p=(double)(p+1)/p;
	      sum+=p;
	
		}
		printf("%.3lf\n",sum); 
	}
	 
	return 0;
}