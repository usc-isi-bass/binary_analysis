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
	char a[10001],b[10001],c[10001];
	int x,i;
	cin>>a;
	x=strlen(a);
    for(i=0;i<=x;i++)
		b[i]=a[x-i-1];
	
	cout<<b;
	return 0;
}