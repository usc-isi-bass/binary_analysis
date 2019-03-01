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
    int a,b,c,d,s=0,n,i=1;
	scanf ("%d",&n);
	do
	{
		a=i/10;
		b=i-a*10;
		c=i/7;
		d=i-7*c;
		s=s+i*i;
        if(a==7||b==7||d==0)
		{
			s=s-i*i;
		}
		i++;
	}while(i<=n);
	printf("%d",s);
	return 0;
}