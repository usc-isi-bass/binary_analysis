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
	int a[300],i,j,k=0,b,c;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		if((c=getchar())=='\n') break;
	}
	b=i+1;
	for(i=0;i<b-1;i++)
		for(j=0;j<b-1-i;j++)
			if(a[j]<a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
	for(i=0;i<b-1;i++)
		if(a[i]!=a[i+1])
		{
			printf("%d\n",a[i+1]);
			k=1;
			break;
		}
		if(k==0)
			printf("No");

}