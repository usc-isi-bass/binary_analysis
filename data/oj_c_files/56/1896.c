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
	char ch,a,b,c,d,e;
	int n;
	n=0;
    while (scanf("%c",&ch)!=EOF)
	{
		n=n+1;

		switch(n)
		{
		case 1:a=ch;break;
		case 2:b=ch;break;
        case 3:c=ch;break;
		case 4:d=ch;break;
		case 5:e=ch;break;
		}
	}

	while (n>0)
	{
	
		switch(n)
		{
		case 5:printf("%c",e);break;
		case 4:printf("%c",d);break;
		case 3:printf("%c",c);break;
		case 2:printf("%c",b);break;
		case 1:printf("%c",a);break;
		}
			n=n-1;
	}
	return 0;
}