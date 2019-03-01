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
	int n,i,j,k,a[100],sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		sum=0;
		scanf("%d",&k);
		for(j=1;j<=k;j++)
		scanf("%d",&a[j]);
		for(j=1;j<=k;j++)
		{
			sum=a[j]+3*(j-1); 
			if(sum>=60)
			{
				printf("%d\n",60-(j-1)*3);
			    break;
			}
			else if(sum==57||sum==58||sum==59)
			{
				printf("%d\n",a[j]);
		        break;
			}
		}
		if(sum<57) printf("%d\n",60-3*k);
}}