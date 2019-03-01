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
	unsigned int n,f=0,x=0,y=0;
	char c;
    scanf("%d,\n",&n);
    x=0;
	y=n;
	while(scanf("%d",&n)!=EOF)
	{

	    scanf("%c",&c);
 	    if(n>=x&&n<y)
		{
			x=n;
		    f=1;
			
		}
		else if(n>y)
		{
			
			x=y;
			y=n;
			f=1;
		
		}
		else if(c!=',')
			break;
		else
			continue;
	}
	if(f==0)
		printf("No");
	else
	    printf("%d",x);
	
	return 0;
}