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
	int a[NUM]={0},d[NUM]={0};
	int k,i,j;
	int max;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&a[i]);
	}
	d[k-1]=1;
	for(i=k-2;i>=0;i--){
		max=0;
		for(j=k-1;j>i;j--){
			if(a[j]<=a[i]){
				if(d[j]>max) max=d[j];
			}
		}
		d[i]=max+1;
	}
	//?d[]????
	max=d[0];
	for(i=1;i<k;i++){
		if(d[i]>max) max=d[i];
	}
	printf("%d\n",max);
	return 0;
}