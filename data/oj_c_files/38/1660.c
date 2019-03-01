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
	int k,cycle;
	cin>>k;
	for(cycle=0;cycle<k;cycle++)
	{
		int n,i;
		double a=0,s=0,x[1000]={0};
		cin>>n;
		for(i=0;i<n;i++) 
		{ scanf("%lf",&x[i]); a+=x[i];}
		a=a/n;
		for(i=0;i<n;i++) s+=abs(x[i]-a)*abs(x[i]-a);
		s=sqrt(s/n);
		printf("%.5f\n", s);

	}


	cin.get();
	cin.get();
	cin.get();
	return 0;
}
