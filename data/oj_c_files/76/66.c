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
	int n, sz1[number], sz2[number], j, k, l, mc, go;
	scanf("%d", &n);
	for(j=0;j<n;j++)
	{
		scanf("%d%d", &(sz1[j]), &(sz2[j]));
	}
	for(l=0;l<n;l++)
	{
		for(j=0;j<n-l;j++)
		{
			if(sz1[j]>sz1[j+1])
			{
		    	mc=sz1[j];
                sz1[j]=sz1[j+1];
				sz1[j+1]=mc;
				mc=sz2[j];
                sz2[j]=sz2[j+1];
				sz2[j+1]=mc;
			}
		}
	}
    for(j=2;j<n+1;j++)
	{
	    go=0;
		for(l=1;l<j;l++)
		{
			if(sz1[j]>sz2[l])
			    go++;
		}
		if(go==j-1)
			break;
	}
	if(go==j-1)
		printf("no");
	else if(go!=j-1)
	{
		for(l=1;l<n+1;l++)
		{
	        for(j=1;j<n+1;j++)
			{
	        	if(sz2[j]>sz2[j+1])
				{
					mc=sz2[j];
                    sz2[j]=sz2[j+1];
			       	sz2[j+1]=mc;
				}
			}
		}
	 	printf("%d %d", sz1[1], sz2[n+1]);
	}
	return 0;
} 