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
	long int n,i,j,c=0;
	int a[100000],k;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(i=0;i<n-c;)
	{
		if(a[i]==k)
		{
			c++;
			for(j=i+1;j<n;j++)
			{
				a[j-1]=a[j];
			}
		}
		else i++;
	}
	for(i=0;i<n-c;i++)
	{
		printf("%d",a[i]);
		if(i!=n-c-1) printf(" ");
	}
}