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
	int n,i,j,k,num[300];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		int s=0;
		for(j=i+1;j<n;j++)  /*??num[i]????????*/
		{
			if(num[i]==num[j])
				s=s+1;
		}
		if(s!=0)        /*????????????*/
		{
			int t=0;
	    	for(k=0;k<=i;k++)
			{
				if(num[i]==num[k])
					t=t+1;
			}
			if(t<=1)/*????*/
			{
				if(i==0) printf("%d",num[i]);
				else	printf(",%d",num[i]);
			}
		}
		else      /*????*/
		{
			int t=0;
			for(k=0;k<=i;k++)
			{
				if(num[i]==num[k])
					t=t+1;
			}
			if(t==1)
			{
				if(i==0) printf("%d",num[i]);
			else
				printf(",%d",num[i]);
			}
		}
	}
}
