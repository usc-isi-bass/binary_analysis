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
	int a,b,c;
	for (a=0;a<=2;a++)
		for (b=0;b<=2;b++)
			for (c=0;c<=2;c++)
			{
				if (((a>b)+(c==a))==a && ((a<b)+(a<c))==b && ((c<b)+(b<a))==c ) 
				{
					if (b>c&&c>a)
						    cout<<"BCA";
					else if (a>c&&c>b)
					        cout<<"ACB";
					else if (b>a&&a>c)
					        cout<<"BAC";
					else if (a>b&&b>c)
						    cout<<"ABC";
					else if (c>a&&a>b)
						    cout<<"CAB";
					else if (c>b&&b>a)
						cout<<"CBA";
	
				}
			}
return 0;
}
