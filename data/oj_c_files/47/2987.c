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



int main() {
	int N;
	cin >>N;
	const int n=N;
	int a[n];
	for (int i=0;i<=n-1;i++)
	{
		cin >>a[i];
	}
	int b[n];
	for (int i=0;i<=n-1;i++)
	{
		b[i]=a[n-i-1];
	}
	for (int i=0;i<=n-1;i++)
	{
		cout <<b[i];
		if (i<n-1)
			cout <<" ";
	}
	return 0;
}