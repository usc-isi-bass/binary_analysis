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
int n,array[1000];
float sum=0;
scanf("%d",&n);
for(int i=0;i<n;i++)
{
	scanf("%d",&array[i]);
}
for(int i=0;i<n;i++)
{
	sum+=array[i];
}
sum=sum/n;
sort(array,array+n);
if(sum-array[0]*1.0>array[n-1]*1.0-sum){printf("%d",array[0]);}
if(sum-array[0]*1.0==array[n-1]*1.0-sum){printf("%d,%d",array[0],array[n-1]);}
if(sum-array[0]*1.0<array[n-1]*1.0-sum){printf("%d",array[n-1]);}
	return 0;
}