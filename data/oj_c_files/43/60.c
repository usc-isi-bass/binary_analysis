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
	int m,i,j,k,c;
	scanf("%d",&m);
    for (i=3;i<=(m/2);i+=2)
	{
		c=1;
		for(j=3;j<i;j++)
		{
			if(i%j==0)
			{	c=0;
			break;
			}
		}
		if(c==0) continue;
		for(k=3;k<m-i;k++)
		{
			if((m-i)%k==0)
			{c=0;
			break;
			}
		}
		if(c==0) continue;	

		printf("%d %d\n",i,m-i);
	}
	return 0;
}



