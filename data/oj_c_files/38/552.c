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
	int i,n,a;
	double num=0;
	float x[100],sum=0,b;
	scanf("%d",&n);
	while(n>0)
	{
		sum=0;num=0;
			scanf("%d",&a);
	for(i=0;i<a;i++){                            
		scanf("%f",&x[i]);
	}
	for(i=0;i<a;i++){
		sum+=x[i];
		
	}
	b=sum/a;
	for(i=0;i<a;i++){
		num+=pow((x[i]-b),2);
	}

		printf("%0.5lf\n",sqrt(num/a));
	
	n--;
	}
    return 0;
}



	