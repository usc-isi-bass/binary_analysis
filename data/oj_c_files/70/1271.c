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
	int i,j,n;
	double x[100],y[100],z[100][100],w;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i]>>y[i];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			z[i][j]=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
	w=z[0][1];
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			if(w<z[i][j])
				w=z[i][j];
	printf("%.4f\n",w);
	return 0;
}