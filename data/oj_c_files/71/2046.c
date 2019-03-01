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
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int n,i,c,d,e,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d%d",&c,&d,&e);
		int y=0;
		if(d<e)
        {
			for(j=d-1;j<e-1;j++)
			{
			      y=y+a[j];
			}
		}
		else
		{
			for(j=e-1;j<d-1;j++)
			{
				y=y+a[j];
			}
		}
		if(((c%4==0&&c%100!=0)||c%400==0)&&((d<e&&d<=2&&e>2)||(d>e&&e<=2&&d>2)))
		{
			
				y=y+1;
				
		}
		
		if(y%7==0)
			printf("YES\n");
		else
			printf("NO\n");
		
	}
	
	return 0;
}
