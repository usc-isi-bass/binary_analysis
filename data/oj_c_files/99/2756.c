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


int main(){
	int n,a[100]={0},i;
	double x1=0.0,x2=0.0,x3=0.0,x4=0.0;
	double c1,c2,c3,c4;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i]>60) x4++;
		else if(a[i]>35) x3++;
		else if(a[i]>18) x2++;
		else x1++;
	}
	c1=(x1/n)*100;
	c2=(x2/n)*100;
	c3=(x3/n)*100;
	c4=(x4/n)*100;
	printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",c1,c2,c3,c4);
	return 0;
}
