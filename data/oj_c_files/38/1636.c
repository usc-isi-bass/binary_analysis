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
{	int k,n,h,i,j=0;
         double b[100]={0};
	double a,s,sum,c[100]={0};
	cin>>k;
	h=k;
	while(k){
		a=0;sum=0;
		cin>>n;
		for(i=0;i<n;i++){
			cin>>b[i];
			a+=b[i];
		}
        a=a/n;
		for(i=0;i<n;i++)
			sum+=(b[i]-a)*(b[i]-a);
		sum/=n;
		c[j]=sqrt(sum);
		j++;
		k--;
	}
	for(i=0;i<h;i++)
		printf("%.5f\n",c[i]);
	return 0;
}

