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
	int x,d=0;
	int a=3,b=5,c=7;
	scanf("%d",&x);
	if(x%a==0&&x%b==0&&x%c==0)
	{
		printf("3 5 7");
	}
	else if(x%a==0&&x%b==0&&x%c!=0)
	{
		printf("3 5");
	}
	else if(x%a==0&&x%b!=0&&x%c==0)
	{
		printf("3 7");
	}
	else if(x%a!=0&&x%b==0&&x%c==0)
	{
		printf("5 7");
	}
	else if(x%a==0&&x%b!=0&&x%c!=0)
	{
		printf("3");
	}
	else if(x%a!=0&&x%b==0&&x%c!=0)
	{
		printf("5");
	}
	else if(x%a!=0&&x%b!=0&&x%c==0)
	{
		printf("7");
	}
	else if(x%a!=0&&x%b!=0&&x%c!=0)
	{
		printf("n");
	}
	return 0;
}