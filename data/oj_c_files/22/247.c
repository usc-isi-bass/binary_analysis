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
	int a[300];
	int k,j,i=0;
	int t;
	do
	{scanf("%d",&a[i]);
	i++;}while(getchar()!='\n');
	for(j=0;j<i-1;j++)
		for(k=0;k<i-1-j;k++)
		if(a[k]<a[k+1])
		{t=a[k];
		 a[k]=a[k+1];
		 a[k+1]=t;
		}
	for(j=1;j<i;j++)
	   if(a[j]<a[0])
	   {printf("%d",a[j]);
	   break;}
	if(j==i) printf("No");
}