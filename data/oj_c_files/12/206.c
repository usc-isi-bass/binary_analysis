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
	int i,j,k,l,x=0,a[20];		
	
	
		while(1)
		{
			x=0;
			scanf("%d",&a[0]);
			if(a[0]==-1) break;
			for(j=1;a[j-1]!=0;j++)
			scanf("%d",&a[j]);
		for(k=0;k<j-1;k++)
		{
			for(l=0;l<j;l++)
			{
				if(a[l]==2*a[k])
					x=x+1;
			}
		}
		printf("%d\n",x);
	}
}
