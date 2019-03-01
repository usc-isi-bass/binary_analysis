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
	int m,i=0,j=0,a=0,b=0,c=0,d=0;
	scanf("%d",&m);
    for(i=3;i<=(m/2);i=i+2)
	{
		c=0;
		d=0;
		for(a=2;a<i;a++)
		{
			
			b=i%a;
			if(b==0)
			c++;
      
		}
		for(a=2;a<(m-i);a++)
		{
			
			b=(m-i)%a;
			if(b==0)
			d++;
      
		}
		if((c==0)&&(d==0))
			printf("%d %d\n",i,(m-i));

	
		
	}
	return 0;
}