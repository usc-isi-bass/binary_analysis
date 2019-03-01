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
	int a[300],i=1,j,b,c=0,n;
	scanf("%d",&a[0]);
	while(scanf(",%d",&a[i]))i=i+1;
	b=a[0];
	for(j=0;j<i;j++){
	if(a[j]>b)b=a[j];
	}
	for(n=0;n<i;n++){
	if(a[n]>c&&a[n]!=b)
		c=a[n];
	}
	if(c==0)printf("No\n");
	else
	printf("%d\n",c);
	return 0;
}
