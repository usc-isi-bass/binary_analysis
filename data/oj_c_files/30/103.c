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
	int n,a,b,c,d,sum=0;
	scanf("%d",&d);
	for (n=1;n<=d;n++)
	{
		a=(int)n/100;
		b=(int)(n-a*100)/10;
		c=n-100*a-10*b;
		if(n%7!=0&&a!=7&&b!=7&&c!=7)
			sum=sum+n*n;}
			printf("%d\n",sum);
	
return 0;
}