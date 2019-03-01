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
	int a[100],N=0,i=0;
	int *p=&a[0];
	cin>>N;
	for(i=0;i<N;i++)
	cin>>*p++;
	cout<<*--p;
	for(i=N-2;i>=0;i--)
	cout<<" "<<*--p;
	return 0;
}