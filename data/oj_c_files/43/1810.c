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
	int m,i,j,k,l;
	scanf("%d",&m);
	for (i=3;i<=(m/2);i++)
	{
		for (j=2;j<=i;j++)
		{
			if (i%j==0)
				break;
		}
		for (k=2;k<=m-i;k++)
		{
			if((m-i)%k==0)
				break;
		}
		if (i==j)
		{
			if(m-i==k)
			{
				printf("%d",i);printf(" ");printf("%d\n",(m-i));
			}
		}
	}
}

			