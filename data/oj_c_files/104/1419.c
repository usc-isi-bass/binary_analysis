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

int P(int a,int b)
{
	if (a==b)
	{
		return a;
	}
	return P(a/2,b/2);
}
int main()
{
	int a,b;
	cin>>a>>b;

	int i,j;
	for (i=0;a>>i!=0;i++);
	for (j=0;b>>j!=0;j++);
	if (i>j)
	{
		a>>=(i-j);
	}
	else
	{
		b>>=(j-i);
	}
	cout<<P(a,b);
	return 0;
}