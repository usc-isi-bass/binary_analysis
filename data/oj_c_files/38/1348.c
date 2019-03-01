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
	int k,n;
	scanf("%d",&k);

	double sum=0,sum1=0,S,a,b,sz[100];
	
	int i=0;
	while(i<k){
        scanf("%d",&n);
		int j=0;
		while(j<n){
			scanf("%lf",&(sz[j]));
			sum += sz[j];
			j++;
		}
		a=(double)sum/n;

		int o=0;
		while(o<n){
            b = (sz[o]-a)*(sz[o]-a);
			sum1 += b;
			o++;
		}

		S = sqrt(sum1/n);
		printf("%.5f\n",S);

        int x=0;
		while(x<100){
			sz[x]=0;
			x++;
		}
sum=0;
sum1=0;

		i++;
	}
	return 0;
} 
