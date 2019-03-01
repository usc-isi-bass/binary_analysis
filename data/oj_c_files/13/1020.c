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
	int n,end;
	cin >> n;
	int a[n], b[n];
	memset(b, 0, sizeof(b));
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < n; i++)
		for (int j = i + 1; j< n; j++)
		{
			if(a[i] == a[j])
			{
				b[j] = 1;
			}
		}
	for (int i = n-1; i >= 0; i--)
	{
		if(b[i]==0)
		{
			end = i;
			b[i] = 1;
			break;
		}
	}
if(end!=0)
	{for (int i = 0; i < n; i++)
	{
		if(b[i] == 0)
		cout << a[i] << " " ;
	}}
	cout << a[end] << endl;
	return 0;
	
}