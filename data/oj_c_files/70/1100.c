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
	int n,i,j;
	double x[100],y[100],max=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2)) > max)
				max = sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
	cout<<fixed<<setprecision(4)<<max<<endl;
	return 0;
}




	


	

		

