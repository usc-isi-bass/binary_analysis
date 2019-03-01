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
	int a,b,c;
	scanf("%d",&a);
	b=0;
	c=a%3;
	if(c==0) b++;
	c=a%5;
	if(c==0) b=b+2;
	c=a%7;
	if(c==0) b=b+4;
	switch(b)
	{
	case 7:printf("3 5 7");break;
	case 6:printf("5 7");break;
	case 5:printf("3 7");break;
	case 4:printf("7");break;
	case 3:printf("3 5");break;
	case 2:printf("5");break;
	case 1:printf("3");break;
	case 0:printf("n");break;
	}

}
