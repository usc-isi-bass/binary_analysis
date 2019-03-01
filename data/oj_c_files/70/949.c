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
	double s,a[10][2],x=0;
	cin>>n;
    for(i=0;i<n;i++){
		for(j=0;j<2;j++) cin>>a[i][j];}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			s=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			if(s>x) x=s;}}
	printf("%.4f\n",x);
	return 0;
}

