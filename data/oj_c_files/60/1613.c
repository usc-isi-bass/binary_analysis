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

	int n,i,a,j,k,b=0;
		scanf("%d",&n);
		for(i=3;i<=(n-2);i++)
		{
			k=sqrt(i);
			for(j=2;j<=k;j++)
			{
				if(i%j==0)
					break;
			}
	        if(j>k)
			{
					a=i+2;
					k=sqrt(a);
					for(j=2;j<=k;j++)
					{
						if(a%j==0)
					break;
					}
					if(j>k) 
					{

						b=1;
					printf("%d %d\n",i,a);
					}
			 
			 }
		}
		if(b==0)printf("empty");
}

