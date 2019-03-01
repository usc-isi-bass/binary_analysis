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

int len;
char a[200],b,g;
int match (int p)
{
	if (p==len-1)
		return p;
	int q;
	if (a[p]==b)
	{
		q=match(p+1);
		cout<<p<<" "<<q<<endl;
		return match(q+1);
	}
	else
		return p;
}
int main()
{
	cin>>a;
	len = strlen(a);
	b=a[0];
	g=a[len-1];
	match(0);
}