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

int sushu (int x)
{ 
	
	if (x==2)
		return 1;
	else
	{
		int i,c;
		
		c=sqrt(x);
		for(i=2;i<=c;i++)
		{
			if(x%i==0)
				return 0;
		}
		return 1;
	}
}
int main(int argc, char* argv[])
{
	int n,i,j;
	scanf ("%d",&n);
	for(i=6;i<=n;i++)
	{ 
		if(i%2==1)
			continue;
		else
		{
			
			for (j=2;j<=i/2;j++)
			{ 
				if(sushu(j)&&sushu(i-j))
				{	 printf("%d=%d+%d\n",i,j,i-j);
				break;
				}
			}
		}
		
	}
	
	return 0;
}
