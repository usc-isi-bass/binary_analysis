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
	
	int a,b,c,d;
	void f(int x);
	scanf("%d%d%d%d",&a,&b,&c,&d);
	f(a);
	f(b);
	f(c);
	f(d);
	return 0;
}


void f(int x)
    {
	int y=0;
    while(x>9)
	{
      y=(y+x-x/10*10)*10;
      x/=10;
    }
	    y+=x;
    printf("%d\n",y);
	}