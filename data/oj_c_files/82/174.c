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
	int n,i,a[100],b[100],c[100]={0},k,j,e;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(k=n;k>0;k--){
		for(i=n-k;i<n;i++){
			if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
				c[i]++;
			}
			else{
				break;
			}
		}
	}
	for(j=1;j<n;j++){
		for(i=0;i<n-j;i++){
			if(c[i]>c[i+1]){
				e=c[i+1];
				c[i+1]=c[i];
				c[i]=e;
			}
		}
	}
	printf("%d",c[n-1]);
	return 0;
}
