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
	int a=0,b,c,d=0;
	char e;
	scanf("%d%c",&c,&e);
	     while(e==',')
		{
		scanf("%d%c",&b,&e);
		if (b>c)
		{
			d=c;
			c=b;}
		else
		{
			if(b>d&&b!=c)
				d=b;}
		a=a+1;
		 }
		if (d!=0)
	{
		printf("%d",d);}
	else 
	{ 
		printf("No");}
	return 0;
}