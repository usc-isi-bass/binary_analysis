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

int a[100];
void c(int n)
{
	int i;
	for(i=0;i<n;i++)
		cin>>a[i];
}
void b(int n)
{
	int i;
	for(i=n-1;i>0;i--)
		cout<<a[i]<<" ";
	cout<<a[0];
}
int main()
{
	int n;
	cin>>n;
	c(n);
	b(n);
	return 0;
}
