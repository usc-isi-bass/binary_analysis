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

int n;
int a[1002],b[1002];
int solve(int start);
int main(){
	int i;
	while(scanf("%d",&n) &&n){
		for(i=0;i<n;i++)
			scanf("%d",b+i);
		for(i=0;i<n;i++)
			scanf("%d",a+i);
		sort(a,a+n);
		sort(b,b+n);
		int maxp=-99999999;
		for(i=0;i<n;i++){
			int temp=solve(i);
			if(maxp<temp)maxp=temp;
		}
		printf("%d\n",maxp);
	}
	return 0;
}

int solve(int start){
	int i;
	int sum=0;
	for(i=start;i<n;i++){
		if(b[i]>a[i-start])sum+=200;
		else if(b[i]<a[i-start])sum-=200;
		else;
	}
	for(i=0;i<start;i++){
		if(b[i]>a[n-start+i])sum+=200;
		else if(b[i]<a[n-start+i])sum-=200;
		else;
	}
	return sum;
}