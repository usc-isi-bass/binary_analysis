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
	int m,a,b,j,i,sgn1=0,sgn2=0;
	scanf("%d",&m);
	for (a=3;a<=m/2;a++)
		{
			for(j=2;j<=a/2+1;j++)
			{
			if(a%j==0)
			{
				sgn1=0;
				break;
			}
			else sgn1=1;
		}
			if (sgn1==0) continue;
			for(i=2;i<=(m-a)/2+1;i++)
			{
			if((m-a)%i==0)
			{
				sgn2=0;
				break;
			}else sgn2=1;
		}
		if(sgn1&&sgn2)
			printf("%d %d\n",a,m-a);
	}
	return 0;
}
