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

int main ()
{
	int a[100]={0};
	int n;
	cin>>n;
	int *p=a;
	for (int i=0;i<n;i++)
		cin>>*p++;
	for (int i=0;i<n;i++)
	{
		if (i!=0)
			cout<<" ";
		cout<<*--p;
	}
	
	return 0;
}