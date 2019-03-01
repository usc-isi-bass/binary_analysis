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

int l;
int main()
{
	char a[5];
	int n;
	void pailie(int n,char ar[]);
   	gets(a);
	l=strlen(a);
	n=l;
	pailie(n,a);
	return 0;
}
void pailie(int n,char ar[])
{
	if(n==1)printf("%c",ar[l-n]);
	else
	{
		pailie(n-1,ar);
		printf("%c",ar[l-n]);
	}
}
