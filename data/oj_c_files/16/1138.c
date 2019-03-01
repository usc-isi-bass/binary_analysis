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
	int n,p;
	cin>>n;
	p=0;
	cout<<(n%10);
	while(n>9)
	{
		p=(n-(n%10))/10;
		n=p;
		cout<<(n%10);
	}
}
