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
	int i,j,n,t,a[300]={0};
	float ave=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	ave=sum/n;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(a[i]>a[i+1]){
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	if((ave-a[0])>(a[n-1]-ave))
		printf("%d",a[0]);
	else if((ave-a[0])<(a[n-1]-ave))
		printf("%d",a[n-1]);
	else
		printf("%d,%d",a[0],a[n-1]);
	return 0;
}
