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
	double a[1001]={0},sum1=0,sum2=0,avr=0,s;
	double *p=a;
	int n,k;
	cin>>k;
	while(k--){
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>*(p+i);
		for(int j=0;j<n;j++)
			sum1+=*(p+j);
		avr=sum1/n;
		for(int k=0;k<n;k++)
			sum2+=(*(p+k)-avr)*(*(p+k)-avr);
		s=sqrt(sum2/n);
		printf("%.5f\n",s);
		sum1=sum2=0;
	}
	//while(1);
	return 0;
} 