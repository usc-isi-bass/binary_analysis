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


int f(int i, int j)
{
	int k;
	k = i + j;
	return k;
}

int main ()
{
	int n,a,b,c,i,j,k;
	cin >> n;
	for (b = 1; b<= n; b++)
	{
		cin >> a;
		if (a == 1 || a == 2)
			cout << "1" << endl;
		else
		{
			i = 1;
			j = 1;
			for (c = 2; c < a; c++)
	        {
				k = f(i,j);
				i = j;
				j = k;
			}
			cout << j << endl;
		}
	}
	    return 0;
}