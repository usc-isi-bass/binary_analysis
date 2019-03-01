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
	double sum[100];
	scanf("%d",&m);
	for(i=0;i<m;i++)
		sum[i]=0;
	

	for(i=0;i<m;i++){
        scanf("%d",&n);
		int a=2;
		int b=1;
	
		for(j=0;j<n;j++){
		sum[i]+=1.0*a/b;
		a=a+b;
		b=a-b;
		}
		printf("%.3lf\n",sum[i]);
	
	}
	
	return 0;
}

