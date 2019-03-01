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
	int n,i;
	scanf("%d",&n);
	unsigned int S=0;
	for(i=1;i<=n;i++)
	{
		if(n<100&&n>0)
		  if(i%7==0)
		      S+=0;
		  else if((i-7)%10==0)
              S+=0;
		  else if((i-70)<10&&(i-70)>0)
			  S+=0;
		  else
			  S+=i*i;



	}
	printf("%u\n",S);
	return 0;
}
