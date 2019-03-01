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
	int n;
	double maxx= 0 ;
	cin >> n;
	double *x = (double*) malloc( (n+1) * sizeof(double));
	double *y = (double*) malloc( (n+1) * sizeof(double));

	
	for ( int i = 0 ; i < n ; i++ ) {
		cin >> x[i] >> y[i];
	}

	for ( int i = 0 ; i < n ; i++) {
	   for ( int j = 0 ; j < n ; j++ ) {
		   double temp = sqrt(sqr(x[i]-x[j]) + sqr(y[i]-y[j]));
		   if (temp > maxx) {
		        maxx = temp;
		   }
	   
	   }
	
	}

	cout << maxx << endl; 

return 0;
}