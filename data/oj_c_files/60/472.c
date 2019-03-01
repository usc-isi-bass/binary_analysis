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
	int n,i,m,k,cp=2,count=0;
	
	scanf("%d",&n);
	for(m=3;m<=n;m=m+2)
	{
		
		k=sqrt(m);
		for(i=2;i<=k;i++)
			if(m%i==0)break;
			if(i>=k+1)
			{
				if(m-2==cp&&m!=3)
				{printf("%d %d\n",cp,m);count++;
				}
				cp=m;
						
			}
			
	}
	if(count==0)printf("empty");
}