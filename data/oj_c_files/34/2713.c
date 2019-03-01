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

void main()
{
	int a,n,i,t;
	scanf("%d",&a);
	if(a==1) printf("End");
	else
	{
	while(a!=1)
	{
		if(a%2==1)
		{
			t=a*3+1;
			printf("%d*3+1=%d\n",a,t);
			a=t;
		}
		if(a%2==0)
		{
			t=a/2;
			printf("%d/2=%d\n",a,t);
			a=t;
		}
	}
	printf("End");
	}
	
}



	

