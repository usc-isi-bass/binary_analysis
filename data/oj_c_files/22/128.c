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
	int n=0,m=0,a[300]={0},i=0;
	char b[300];
	do
	{
		scanf("%d%c",&a[i],&b[i]);
		i++;
	}while(b[i-1]==',');

	for(i=0;i<300;i++)
	{
		if(a[i]>m)m=a[i];
	}
	
	for(i=0;i<300;i++)
	{
		if(a[i]<m&&a[i]>n)n=a[i];
	}
	if(n!=0)printf("%d",n);
	else printf("No");
}

	
	
