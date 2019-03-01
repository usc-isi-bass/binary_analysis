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

int pingguo(int a,int b);
int main()
{
	int n,k,y;
	scanf("%d%d",&n,&k);
	y=pingguo(n,k);
	printf("%d",y);
	return 0;
}

int pingguo(int a,int b)
{
	int i,z,k=1,j;
	while(1)
	{
		j=1;
		z=k*a+b;
		for(i=1;i<a;i++)
		{
			if(z%(a-1)==0)
			{
				z=z/(a-1)*a+b;
				j=j+1;
			}
			else 
			{
				k=k+1;
				break;	
			}
			
		}
		if(j==a) break;
	}
	return z;
}