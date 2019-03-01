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
{	char a,ch;
	int sum;

	a='0';
	while(cin>>ch)
	{
		if(ch>96) ch-=32;
		if(ch!=a)
		{
			if(a!='0') printf("(%c,%d)",a,sum);
			a=ch;sum=1;
		}
		else sum++;
	}
	printf("(%c,%d)",a,sum);


	return 0;
}
