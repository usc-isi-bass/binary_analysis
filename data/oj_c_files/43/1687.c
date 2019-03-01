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
	int i,j,k;
	int n;
	int a[10000]={0};
	for(i=0;i<10000;i++)
		if(i%2)
			a[i]=i;
	for(i=3;i<100;i=i+2)
		for(j=i+2;j<10000;j++)
			if(a[j])a[j]=j%i;
	for(i=0;i<10000;i++)
		if(a[i])
			a[i]=i;
	scanf("%d",&n);
	for(i=3;i<n/2+1;i++)
	if(a[i]&&(a[n-a[i]]))
		printf("%d %d\n",a[i],n-a[i]);

}
