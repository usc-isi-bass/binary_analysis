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
	int n,i,j,k=0,p,l=0;
	scanf("%d",&n);
	if(n<5)
		printf("empty");
 	for(i=2;i<n-1;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
				break;
			else
				k++;
		}
		if(k==i-2)
		{
			p=i+2;
			for(j=2;j<p;j++)
			{
			    if(p%j==0)
					break;
				else
					l++;
			}
			if(l==p-2)
				printf("%d %d\n",i,p);
		}
		k=0;l=0;
	}
	
}