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
	int a,b=0,c;
	char d;
	scanf("%d",&a);
	for(;;)
	{
		d=getchar();
		if(d!=',')
			break;
		else
		{
			scanf("%d",&c);
			if(c>a)
			{
				b=a;
				a=c;
			}
			else if(c<a&&c>b)
				b=c;
			else
				continue;
		}
	}
	if(b==0)
		printf("No");
	else 
		printf("%d",b);
return 0;
}


