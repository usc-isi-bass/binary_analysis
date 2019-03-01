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
	int k;//??????
	cin>>k;
	int i=0;		
	int a[100];
	for(i=0;i<k;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<(k-1);i++)
	{

		cout<<a[(k-i-1)]<<" ";
	}
	cout<<a[(k-i-2)];
	return 0;
}
