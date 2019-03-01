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
	int n,m;
	char a='=',b='/',c='*',d='+';
	scanf("%d",&n);
		while(n!=1)
		{
			if (n%2==0)
			{	
				m=n/2;
				printf("%d%c%d%c%d\n",n,b,2,a,m);
		    	n=n/2;
			}
			else
			{
				m=n*3+1;
				printf("%d%c%d%c%d%c%d\n",n,c,3,d,1,a,m);
				n=n*3+1;
			}
		}
		printf("End");
	
		return(0);
}