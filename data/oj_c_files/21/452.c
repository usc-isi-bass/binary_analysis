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

void main()
{
	int n,i,sum=0,j,t=0,x;
	int a[300];
	double b[300];
	double p;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	p=(double)sum/n;
	for(i=0;i<n;i++){
		b[i]=fabs(a[i]-p);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(b[i]>=b[j]){
				t++;
			}
		}
		if(t==n){
			printf("%d",a[i]);
			t=0;
			x=i;
			break;
		}
		else{t=0;}
	}
	for(i=x+1;i<n;i++){
		for(j=0;j<n;j++){
			if(b[i]>=b[j]){
				t++;
			}
		}
		if(t==n){
			printf(",%d",a[i]);
		}
		t=0;
	}
}