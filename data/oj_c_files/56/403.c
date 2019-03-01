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
	int k,a,b,c,d,e,s;
	scanf("%d",&k);
	a=k%10;
	b=k%100-a;
	c=k%1000-a-b;
    d=k%10000-a-b-c;
	e=k%100000-a-b-c-d;
	if(k<10)
	{
		printf("%d\n",k);
	}
    else if (k>10&&k<100)
	{
		s=a*10+b/10;
		printf("%d\n",s);
	}
	else if(k>100&&k<1000)
	{
		s=a*100+b+c/100;
		printf("%d\n",s);
	}
	else if(k>1000&&k<10000)
	{
		s=a*1000+b*10+c/10+d/1000;
		printf("%d\n",s);
	}
	else if(k>10000)
	{
      s=a*10000+b*100+c+d/100+e/10000;
		printf("%d\n",s);
	
	}
		

	return 0;
}

