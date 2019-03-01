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
	float a[1000],b=0.1;
	int i,j,k,m,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%f",&a[i]);
	for(j=0;j<n;j++)
		for(i=j+1;i<n;i++)
		{
			if(a[j]==a[i])
				a[i]=b;
		}
		printf("%g",a[0]);
		for(i=1;i<n;i++)
			if(a[i]!=b)
				printf(",%g",a[i]);




}