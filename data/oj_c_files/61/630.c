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
{   int n;
    int a[100],b[100];
	int i;
	int t;
	a[0]=1;
	a[1]=1;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{  scanf("%d",&b[i]);}
	for(i=2;i<99;i++)
	{  a[i]=a[i-1]+a[i-2];}
	for(i=0;i<n;i++)
	{  if(b[i]==1||b[i]==2)
	   { printf("1\n");}
	   else
	   {  t=b[i]-1;
	   printf("%d\n",a[t]);}}
	return 0;
}
	

