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
	int i,j,m,n;
	scanf("%d",&n);
	if(n<5) printf("empty"); 
	else if(n>=5)
	{
		printf("3 5\n");
		for(i=7;i<n;i=i+2)
		{
			for(j=2;j<i;j++)
				if(i%j==0) break;
				if(j==i)
				{
					for(m=2;m<i-2;m++) 
						if((i-2)%m==0) break;
						if(m==i-2) printf("%d %d\n",i-2,i);
				}
		}
	}

}