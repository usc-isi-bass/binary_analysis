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
	int a[300],i,j,k,t;
    for(i=0;i<300;i++)
	{
		scanf("%d",&a[i]);
		if(getchar()!=',')break;
	}//?i+1???
	if(i==0) printf("No\n");
	else
	{
	for(j=0;j<i+1;j++)
	{
		for(k=0;k<i-j;k++)
		{
			if(a[k]<a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
		}
	}
	for(j=0;j<i;j++)
	{
	    if(a[j]!=a[j+1])
		break;
	}
	if(j==i) printf("No\n");
	else
	printf("%d\n",a[j+1]);
	}

}