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

void main()
{
	int num1[100],num2[100]={0},a[100];
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d ",&num1[i]);
         	for(i=0;i<n-m;i++)
	 num2[i+m]=num1[i];
	for(i=0;i<m;i++)
	 num2[i]=num1[n-m+i];
	for(i=0;i<n-1;i++)
	 printf("%d ",num2[i]);
	printf("%d",num2[n-1]);
}
