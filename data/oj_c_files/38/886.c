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



int main(int argc, char* argv[])
{
	int n,i,j,m;
	double s,x,y;
	double z[100];
	double a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		s=x=y=z[i]=0.0;
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%lf",&a[i][j]);
			s+=a[i][j];
		}
		x=s/m;
		for(j=0;j<m;j++){
            y+=(a[i][j]-x)*(a[i][j]-x);
		}
		z[i]=sqrt(y/m);
		
	}
	for(i=0;i<n;i++)
	printf("%.5lf\n",z[i]);
	return 0;
}


