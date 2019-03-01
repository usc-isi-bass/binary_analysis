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

int f (int x)
{
	int y=2,z=0;
	while(y<=sqrt(x))
	{
		z=z+!(x-(x/y)*y);
		y=y+1;
		}
	return(z);
}
int main()
{
	int a,b,n;
	a=2;
	scanf("%d",&n); 
	while(a<=(n/2))
	{
		b=n-a;
		if((f (a)*f (a)+f (b)*f (b))==0)
		printf("%d %d\n",a,b);
		a++;
		}
}