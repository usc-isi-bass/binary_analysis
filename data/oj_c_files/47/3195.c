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
	cin>>n;
	int a[105];
	int i=0;
    int b;
	while(i<n)
	{
		cin>>a[i];
        i++;
	}
	int c=n-1;
	while(c>=1 && c<=(n-1))
	{
		cout<<a[c];
		cout<<" ";
		c--;
	}
	cout<<a[0];
	return 0 ;
}