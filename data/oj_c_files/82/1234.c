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
	int n,i,j,k[100]={0};
	int a[99][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	for(i=0,j=0;i<n;i++)
		if(a[i][0]>=90&&a[i][0]<=140&&a[i][1]>=60&&a[i][1]<=90)
			k[j]++;
		else
			j++;
	for(i=0,j=k[0];i<100;i++)
		if(k[i]>j)
			j=k[i];
	printf("%d\n",j);
	return 0;
}