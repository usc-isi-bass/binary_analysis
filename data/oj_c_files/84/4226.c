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
	int a,b,c,x,m1,m2,i;
	i=3;
	scanf("%d",&a);
	scanf("%d%d",&b,&c);
	if (b>c)
		{
			m1=b;
			m2=c;
		}
		else
		{
			m1=c;
			m2=b;
		}
	while(i<=a)
	{
		scanf("%d",&x);
		if(x>m1)
		{
			m2=m1;
			m1=x;
		}
		else if(x>m2)
		{
			m2=x;
		}
		else
		{
			x=x;
		}
		i++;
	}
	printf("%d\n%d\n",m1,m2);
	return 0;
}

		
		

