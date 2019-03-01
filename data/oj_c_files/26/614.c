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
	int i, j, n,a, b[101] = { 0 };
	char str[101];
	cin.getline(str,101);
	a=strlen(str);
	for(i=0;i<a;i++)
	{
		n=0;
		if(str[i]==' '&&str[i+1]==' ')
		{
			b[i+1] = 1;
			n++;
		}
	}
	for(j=0;j<a;j++)
	{
		if(b[j]==0)cout<<str[j];
	}
	return 0;
}


