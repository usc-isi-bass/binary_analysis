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

int main(int argc, char* argv[])
{
	int n,i,m=6,zyk(int x);
	scanf("%d",&n);
    while(m<=n)
	{
		for(i=3;i<=m/2;i+=2)
		{
			if(zyk(i)==1 && zyk(m-i)==1)
			{
				printf("%d=%d+%d\n",m,i,m-i);
				break;
			}
		}
		m+=2;
	}
				
	return 0;
}
int zyk(int x)
{
	int i;
	for(i=3;i<sqrt(x)+1;i+=2)
	{
		if(x%i==0)
			return 0;
	}
	return 1;
}