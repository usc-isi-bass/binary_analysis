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

int main ()
{
    int a,b=3,c,n,i,j,l,x,y;
	scanf("%d",&n);
	for (a=6;a<=n;a=a+2)
	{
		for (b=3;b<=a;b=b+2)
		{
		x=(int)sqrt(b);
		for (i=2;i<=x;i++)
			if(b%i==0) break;
			if (i>=x+1) 
			{
				c=a-b;
				y=(int)sqrt(c);
				for (j=2;j<=y;j++)
					if (c%j==0) break;
					if (j>=y+1) {printf("%d=%d+%d\n",a,b,c);break;}
			} 
	}
}
}