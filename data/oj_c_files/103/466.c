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
	int l;
	char a[1000],b[1000];
	cin>>a;
	l = strlen(a);
	int num[1000],i,j = 0;
	for (i = 0; i <= l; i++) num[i] =1;
	for (i = 0; i < l;i++)
	{
		if (a[i+1] != a[i] && a[i+1] != a[i] +32 && a[i+1] != a[i] -32)
		{
			b[j] = a[i];
			j++;
		}
	   if (a[i+1] == a[i] || a[i+1] == a[i] +32 || a[i+1] == a[i] -32)
	   {
		   num[j]++;
	   }
	}
	b[j - 1]=a[l-1];
	for (i = 0; i < j; i++)
	{
		if (b[i] >='A' && b[i] <= 'Z')
		{
	        cout << "(" << b[i]<< "," << num[i] <<")";
		}
		if (b[i] >='a' && b[i] <= 'z')
		cout << "(" << (char)(b[i] - 'a' + 'A') << "," << num[i] <<")";
	}
	return 0;
}