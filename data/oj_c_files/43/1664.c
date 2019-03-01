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
	int m,a,b,c,d,e,f;
	scanf("%d",&m);
a=3;

	while((2*a)<=m)
{
b=m-a;
c=sqrt(a);
d=sqrt(b);
e=c;
f=d;


	
		while(e>=2)
{
if(a%e==0)
break;
else
e--;
		}
			while(f>=2)
{
if(b%f==0)
break;
else
f--;
			}
			if(e==1&&f==1)
				printf("%d %d\n",a,b);
			a++;
			
	}
return(0);
}