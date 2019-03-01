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
	int n,x,biggest=0,bigger=0;
	cin>>n;
	while (n--)
	{
		cin>>x;
		if (x>biggest)
		{
			bigger=biggest;
			biggest=x;
		}
		else if (x>bigger)
			bigger=x;
	}
	cout<<biggest<<endl<<bigger<<endl;
	return 0;
}