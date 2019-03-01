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
	int n,i,sum,c;
	sum = 0;
	
   	scanf("%d",&n);
	i=0;
	while(i<n)
	{
	i++;

	c=i/10;
	if (i%7==0 || i/10==7 || i-c*10==7)
		{
			continue;
		}
	sum = sum+i*i;
	}
	printf("%d\n",sum);
	return 0;
}

