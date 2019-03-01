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
	int n,i,j,number=0;
	double x[100],y[100],s[10000],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%lf%lf",&x[i],&y[i]);
	for(i=0;i<n;i++){
	for(j=i+1;j<n;j++){
		s[number]=sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
	    number++;}
    }
    max=s[0];
    for(j=0;j<number;j++){
	if(s[j]>max)
		max=s[j];}
    printf("%.4f\n",max);
    return 0;
}