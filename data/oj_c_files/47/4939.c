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
	int a[100];
	int n,t;
	scanf("%d",&n);
	int i;
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	if(n%2==0){
		for(i=0;i<=n/2-1;i++){
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<=n-1;i++)
			if(i<n-1)
			printf("%d ",a[i]);
                           if(i=n-1)
			printf("%d",a[i]);
	}
	if(n%2==1){
		for(i=0;i<=(n-1)/2-1;i++){
			t=a[i];
			a[i]=a[n-1-i];
			a[n-i-1]=t;
		}
		for(i=0;i<=n-1;i++)
                           if(i<n-1)
			printf("%d ",a[i]);
                           if(i=n-1)
			printf("%d",a[i]);
	}
	return  0;
}
