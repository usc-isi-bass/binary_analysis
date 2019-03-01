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
	int m,n,i,j;
	double sum[MAX],s[MAX],x[MAX];
	s[0]=2;
	x[0]=1;
	
	scanf("%d",&m);
	for(i=0;i<m;i++){
	   scanf("%d",&n);
	   sum[i]=0;
	   for(j=1;j<=n;j++){

		   s[j]=s[j-1]+x[j-1];
		   x[j]=s[j-1];
		   sum[i]=sum[i]+(s[j-1])/(x[j-1]);
		   
	   }
    
	}
	for(i=0;i<m;i++){
    printf("%.3lf\n",sum[i]);
	}
	return 0;
}