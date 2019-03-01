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
	int a[100000]={0}, i, t, n, k, count=0;
	cin >> n;
	for(i = 0; i < n;i++)
		cin >> a[i];
	cin >> k;
	for(i = 0, t = 0;t<n;t++)
	{
		if(a[t]!=k)
		{
			a[i] = a[t];
			i++;
		}		
		else 
			count++;
	}
	cout << a[0];
	for(i = 1;i < (n - count);i++)
		cout << " " << a[i];
	return 0;
}