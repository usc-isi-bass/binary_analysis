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
char a[7]={'0','0','0','0','0','0','0'};
cin>>a;
int ava=0;
for (int j=6;j>=0;j--)
{
	if (ava==1)
	{
		cout<<a[j];
	}
		if (a[j]!='0')
	{
		ava=1;
	}
}
return 0;
}

	