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

int number=0;
int l;
void sort (int n)
{
	int i;
	for (i=l;n/i>=i;i++)
	{
		if (n%i==0)
		{
			l=i;
			sort (n/i);
			if (n/i==1)
			   	number++;
		}
	}
	number++;
}
int main ()
{
	int n,m,k;
	cin >> n;
	for (k=0;k<n;k++)
	{
		l=2;
		number=0;
    	cin >> m;
    	sort (m);
    	cout << number << endl;
	}
	return 0;
}

