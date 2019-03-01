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

int count;
void solve(int num,int a,int m)
{
	int i;
	if(num==1)
	{
	count++;
	return;}
	for(i=2;i<=num;i++)
	{
		if(i>=a&&(num%i)==0)
		solve(num/i,i,m+1);
	}
}
main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	 
	int num,a;
	count=0;
	scanf("%d",&num);
	solve(num,0,1);
	printf("%d\n",count);}
} 