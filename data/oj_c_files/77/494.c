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
	int stack[5000],top=0,i=0;
	char d;
	char a='X',b='X';
	while ((d=cin.get())!='\n')
	{
		if (a=='X') a=d;
		if (a!=d&&b=='X') b=d;
		if (d==a)
		{
			top++;
			stack[top]=i;
		}
		if (d==b)
		{
			cout<<stack[top]<<' '<<i<<endl;
			top--;
		}
		i++;
	}
	return 0;
}
