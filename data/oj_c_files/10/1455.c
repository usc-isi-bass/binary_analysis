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

main()
{
	int k,a[25],i,j,l,p,q;
	int b[25]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=k-1;j>=0;j--)
	{
		for(l=k-1;l>=j;l--)
		{
			if(l!=j)
			{
			if((a[j]>=a[l])&&(b[j]==b[l]-1))
			{
				b[j]=b[l];
			}
			}
			else if(l==j) 
			{
			   b[j]=b[j]+1;
		    }
		} 	
	}
	for(p=1;p<=k-1;p++)
			{
				if(b[0]<b[p])
				{
				    q=b[0];
					b[0]=b[p];
					b[p]=q;
				}
			}
	printf("%d",b[0]);
}