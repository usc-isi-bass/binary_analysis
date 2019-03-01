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
	int n;
	int a[102];
	cin>>n;
	for(int i = 0;i<n;i++)
	{
		cin>>a[i];
	}
	int c = 0;
	for(int k = n - 1;k>=0;k--)
	{
		cout<<a[k];
		c++;
		if(c != n)
			cout<<" ";
	}
}