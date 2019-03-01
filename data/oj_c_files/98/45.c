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
	int n,i;
	char a[300][40];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	int sum=0;
	for(i=0;i<n-1;i++){
		if((80-sum)>=(strlen(a[i]))&&(80-sum)<(strlen(a[i])+strlen(a[i+1])+1)){
			printf("%s\n",a[i]);
			sum=0;
		}
		else if((80-sum)>=(strlen(a[i])+strlen(a[i+1])+1)){
			printf("%s ",a[i]);
			sum=sum+strlen(a[i])+1;
		}
	}
	printf("%s\n",a[n-1]);
}