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
	int copy(int m);
	int a[6],b,i;
	for(i=0;i<6;i++)
	{	scanf("%d",&a[i]);
	b=copy(a[i]);
	printf("%d\n",b);
	}
}
int copy(int m)
{
	int a,b,c;
        
			a=m;
		b=a%10;

		do 
		{
          a=a/10;
		  c=a%10;
		  b=b*10+c;
		}
		while(a/10!=0);
		return b;
		
			
	
}
