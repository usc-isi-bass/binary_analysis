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
	int n,i,j,a[20000],m;
    scanf("%d",&n);
	if(n>=1&&n<=20000)
	{	
		
		for(i=0;i<n;i++)
		{
			m=0;
			if(i==0)
			{
				scanf("%d",&a[0]);
				printf("%d",a[0]);
			}	
			else 
			{
				scanf(" %d",&a[i]);
				for(j=0;j<i;j++)                  
				{
					if(a[i]==a[j])
					{
						m++;
					}
				}
				if(m==0)
				{
				printf(" %d",a[i]);
				}
			}
		}
	}
	return 0;
}