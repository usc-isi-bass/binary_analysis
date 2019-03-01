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

int main() {
	int n,i,middle;
	double a[301],d[301],dmax=0,sum=0.0,x;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	x=sum/n;
	sort(a,a+n);
	for(i=0;i<n;i++){
		d[i]=fabs(a[i]-x);
		if(d[i]>dmax)
			dmax=d[i];
	}
	for(i=0;i<n;i++){
		if(d[i]==dmax){
			cout<<a[i];
			middle=i;
			break;
		}
	}
	for(i=middle+1;i<n;i++){
		if(d[i]==dmax){
			cout<<","<<a[i];
		}
	}
	return 0;
}