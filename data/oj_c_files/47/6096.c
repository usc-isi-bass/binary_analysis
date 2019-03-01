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
	int n, a[100], s;
	cin >> n;
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int j=0; j<n/2; j++)
	{
		s=a[j];
		a[j]=a[n-1-j];
		a[n-1-j]=s;
	}
	for(int h=0; h<n; h++)
		if(h!=n-1)
			cout << a[h] << " ";
		else
			cout << a[h] << endl;
	return 0;
}
