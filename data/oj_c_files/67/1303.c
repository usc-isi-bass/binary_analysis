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
	int n,i;
	double a[10000],b[10000],x,y;
	scanf("%d",&n);
	scanf("%lf %lf",&a[0],&b[0]);
	x=b[0]/a[0];
	for(i=0;i<n-1;i++){
	
	scanf("%lf %lf",&a[i],&b[i]);
	y=b[i]/a[i];
	
	if(y-x>0.05){printf("better\n");}
	else if(x-y>0.05){printf("worse\n");}
	else {printf("same\n");}

	
	}
 

 return 0;
}