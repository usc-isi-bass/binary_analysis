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
	int n,i,j,k,m,z,x=0;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(j==i) 
			{
				m=i;
	            if(m+2>n) break;
		        for(z=2;z<=m+2;z++)
				{
					if(z==m+2) 
					{
						k=m+2;
                        printf("%d %d\n",m,k);
						x=1;
					}
			        else
					{
						if((m+2)%z==0) break;
					}
				}
			}
			else 
			{
				if(i%j==0) break;
			}
		}
	}
	if (x==0) printf("empty");
return 0;
}
