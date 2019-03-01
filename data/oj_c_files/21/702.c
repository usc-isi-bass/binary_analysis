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
	int n,i,a[300],k=0;
	double ave=0.0,max=0.0,x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		ave+=a[i];
	}
	ave/=n;
	for(i=0;i<n;i++){
		x=a[i]-ave;
		if(fabs(x)>fabs(max)){
			max=x;
			k=0;
		}
		else if(fabs(x)==fabs(max)) k++;
	}
	if(k==0) printf("%d",(int)(max+ave));
	else printf("%d,%d",(int)(ave-fabs(max)),(int)(ave+fabs(max)));
}
