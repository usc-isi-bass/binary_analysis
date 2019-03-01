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
	int n,a[100],i,e;
	scanf("%d",&n);
	scanf("%d",&a[0]);
	for(i=1;i<n;i++){
		scanf(" %d",&a[i]);}
	for(i=0;i<n/2;i++){
		e=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=e;}
	printf("%d",a[0]);
	for(i=1;i<n;i++){
		printf(" %d",a[i]);}
	return 0;
}