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
	char a,b;
	cin>>a;
	cout<<a;
	while((b=getchar())&&(b!='\n'))
	{
		if(b!=' ')
			cout<<b;
		if(b==' '&&a!=' ')
			cout<<b;

		a=b;
	}
	return 0;
}
