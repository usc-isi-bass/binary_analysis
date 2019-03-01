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
	int m,a,b,c,d;
	scanf("%d",&m);
	for(a=3;a<m;a++)
	{
		for(c=2;c<=sqrt(a);c++)
				if(a%c==0)
					break;
				if(c>sqrt(a))
				{
					b=m-a;
					for(d=2;d<=sqrt(b);d++)
					{
						if(b%d==0)
							break;
					}
					if(d>sqrt(b)&&a<=b)
						printf("%d %d\n",a,b);
				}
				}
}
