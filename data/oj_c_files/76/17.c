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

void main(){
	int a[10000],b[10000];
	int n,min=10001,max=0;
	int i,num,flag;
	double t;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i],&b[i]);
	for(i=0;i<n;i++){
		if(a[i]<min)
			min=a[i];
		if(b[i]>max)
			max=b[i];
	}
	for(t=min+0.5;t<=max-0.5;t++){
		flag=0;
		for(i=0;i<n;i++)
			if(t>=a[i] && t<=b[i])
				flag++;
		if(flag==0){
			printf("no");
			break;
		}
	}
	if(flag!=0)
		printf("%d %d",min,max);
}









