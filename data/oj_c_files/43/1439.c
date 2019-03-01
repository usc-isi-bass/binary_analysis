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
{  int m,a=3,b,i,j;
scanf("%d",&m);
loop:while(a<=m/2)
{i=2;
	 j=2;
	while(i<=a-1)
	{   if(a%i==0) 
	{a++;
	goto loop;
	}
	else  i++;
	}
b=m-a;
    while(j<=b-1)
		{   if(b%j==0) 
	{a++;
	goto loop;
	}
	else  j++;
	}
printf("%d %d\n",a,b);
a++;
	}
return 0;
}