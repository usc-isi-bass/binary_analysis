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
	int a[100],n,i,min=0,max=0;
	float sum=0,aver,s,t;
	scanf("%d",&n);
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	aver=sum/n;
	for(i=0;i<=n-1;i++){
		if(a[i]<a[min]){
			min=i;
		}
		if(a[i]>a[max]){
			max=i;
		}
	}
	s=aver-a[min];
	t=a[max]-aver;
	if(s>t){
		printf("%d\n",a[min]);
	}
	else if(s<t){
		printf("%d\n",a[max]);
	}	
	else if(s==t){
		printf("%d,%d\n",a[min],a[max]);
	}
}