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
	int n=0,i=0,a[100];
	cin >>n;
	for(i=0;i<n;i++)
		cin >>a[i];
	for(i=0;i<n;i++)
	{
		if(i==0)
			cout <<a[n-1-i];
		else
			cout <<" " <<a[n-1-i];
	}
	cout <<endl;
	return 0;
}
