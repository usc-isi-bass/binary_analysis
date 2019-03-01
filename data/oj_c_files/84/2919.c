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
    int n,i=3,a;
	int max,sec;

	scanf("%d",&n);

	scanf("%d",&a);
	max=a;

	scanf("%d",&a);
	if (a>max)
	{
		sec=max;
		max=a;
	}
	else 
	{
		sec=a;
	}




	for (i=3;i<=n;i++)
	{
		scanf("%d", &a);
	    if (a>max)
		{
			sec=max;
			max=a;
		}
		else if(a>sec)
		      {
		    	sec=a;
		      }
	}
	printf("%d\n%d\n",max,sec);


	    
	return 0;
}

