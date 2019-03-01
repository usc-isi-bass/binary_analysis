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
	int n=0,i=0,j=0;                                  //????
	double L=0;
	cin>>n;
	double x[n],y[n];
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			if(pow(pow(x[j]-x[i],2.0)+pow(y[j]-y[i],2.0),0.5)>L)
				L=pow(pow(x[j]-x[i],2.0)+pow(y[j]-y[i],2.0),0.5);
    }
	printf("%.4f\n",L);                                     //???????
    return 0;
}
