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
	int num,m,n;
	n=0;
	char c;
	scanf("%d%c",&m,&c);
	if(c!=',')
		printf("No");
	
	else
	{
	while(c==',')
	{
		scanf("%d%c",&num,&c);
		if (num>m)
		{
		     n=m;
			 m=num;
		 
		}
		else if(n<num&&num<m)
		{
			n=num;
		}
	}
	if (n==0)
		printf("No");
	else if(m!=n)
		printf("%d",n);
	else
		printf("No");
	}
	return 0;
}


		

	