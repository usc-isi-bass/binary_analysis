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
	int i=0;
	char a[101]=" ";
	for(i=0;i<100;i++)
		cin.get(a[i]);
	for(i=0;i<100;i++)
	{
		if(((a[i]==' ')&&(a[i+1]!=' '))||(a[i]!=' '))
		cout<<a[i];
	}
	return 0;
}
