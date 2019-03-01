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
	char c;
	int n=0;
	while((c=getchar())!='\n')
	{
		if(c==' ')
		{
			if(n==0)//?n????????
			{cout<<' ';n++;}
			else
			{n++;}
		}
		else
		{
			cout<<c;
			n=0;
		}
	}
		return 0;
	}