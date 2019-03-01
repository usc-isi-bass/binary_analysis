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

int n,a[99];
void main()
{
	int f(int,int,int);
	int i,max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	max=f(99999,0,0);
	printf("%d\n",max);
}
int f(int hi,int num,int i)
{
	int t1,t2;
	while(a[i]>hi)
		i++;
	if(i>=n)
		return num;
	t1=f(hi,num,i+1);
	t2=f(a[i],num+1,i+1);
	return t1>t2?t1:t2;
}
