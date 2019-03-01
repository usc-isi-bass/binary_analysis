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
	int a,b,i,max,min,c,as,bs,cs;
	for (a=1;a<=3;a++)
		for (b=1;b<=3;b++)
			for (c=1;c<=3;c++)
			{
			as=(b>a)+(a==c);
			bs=(a>b)+(a>c);
			cs=(c>b)+(b>a);
			if (      ( ( (a>b) && (as<bs) ) || ( (a<b) && (as>bs) ))
				    && (( (c>b) && (cs<bs) ) || ( (c<b) && (cs>bs) ) )
			     	&&( ( (a>c) && (as<cs) ) || ( (a<c) && (as>cs) )  )  )
			   cout <<"BCA";
			}
			return 0;
}