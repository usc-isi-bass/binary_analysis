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
	cin>>a;
	for(int i=1;;i++)
	{
		b=a%10;
		cout<<b;
		c=a/10;
		if(c==0)
			break;
		a=c;
	}
}