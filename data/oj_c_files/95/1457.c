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
	int i;
	char a[81],b[81];
	cin.getline(a,80);
	cin.getline(b,80);
	i=0;
	while (a[i]!='\0')
	{
		if (a[i]>=97) a[i]-=32;
		if (b[i]>=97) b[i]-=32;
		if (a[i]>b[i])
		{
			cout<<'>';
			return 0;
		}
		if (a[i]<b[i])
		{
			cout<<'<';
			return 0;
		}
		i++;
	}
	cout<<'=';
	return 0;
}