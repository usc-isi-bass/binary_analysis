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
	char a[20][20],temp[10];
	int n=0,i,j;
	while(scanf("%s",a[n])!=EOF)n++;
	i=0;j=n-1;
	do
	{strcpy(temp,a[i]);
	strcpy(a[i],a[j]);
	strcpy(a[j],temp);
	i++;j--;}
	while(i<=j);
	printf("%s",a[0]);
	for(i=1;i<n;i++)
		printf(" %s",a[i]);
}