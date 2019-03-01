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
	int n, i, a[100], min=0, max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&a[i-1]);
	}
	for(i=1;i<=n;i++){
		if(a[i-1]>max){
		max=a[i-1];
		}
	}
	printf("%d\n",max);
	for(i=1;i<=n;i++){
		if(a[i-1]<max&&a[i-1]>min){
		min=a[i-1];
		}
	}
	printf("%d\n",min);
	return 0;
}