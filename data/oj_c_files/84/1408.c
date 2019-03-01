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
 int a[100];
 int n,i,s,j;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 int max=-10000;
 for(s=0;s<n;s++)
 {
	 if(max<a[s]) max=a[s];
 }
 int secondMax=0;
 for(j=0;j<n;j++)
 {
	 if(secondMax<a[j]&&a[j]<max)
		 secondMax=a[j];
 }
 printf("%d\n",max);
 printf("%d",secondMax);
 return 0;
}