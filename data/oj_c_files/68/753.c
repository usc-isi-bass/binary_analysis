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
	int n,k,i,l,j,a,b;
	float r;
	scanf("%d",&n);
    for(k=6;k<=n;k=k+2)/*?n???????k,??*/ 
	{
		for(i=3;i<=k;i=i+2)/*????i?????*/
		{
			a=0;
			b=0;
			for(j=3;j<=sqrt(i);j=j+2)
			{
				r=i%j;
				if(r==0)
				 a=1;
			}
			if(a==0)/*?i?????*/
			{
				l=k-i;
				for(j=3;j<=sqrt(l);j=j+2)/*????l?????*/
				{	
					r=l%j;
	        		if(r==0)
						b=1;
				}
				if(b==0)/*?l??????*/
				{
					printf("%d=%d+%d\n",k,i,l);
					break;
				}
				a=0;
				b=0;
			}
		}
	}
}


