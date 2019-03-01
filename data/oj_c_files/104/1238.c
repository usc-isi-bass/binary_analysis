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


int main(int argc, char* argv[])
{

int a,b,c;
int i;
scanf("%d %d",&a,&b);


for (i=1;i<=50;i++)
{ 
	if(a>b)
	{ c=a;
	  a=b;
	  b=c;}
	else if(b>a)
	 b=b/2;
	else 
	{printf("%d",a);
	break;}
}
return 0;
}