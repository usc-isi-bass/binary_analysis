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
	int a;
	int i,f[21];

	cin >> n;
	while(n--)
	{
		cin >> a;
		f[1] = 1;
		f[2] = 1;
		if(a >=3)
		{
			for(i = 3; i <=a; i++)
				f[i] = f[i-1] + f[i-2];
		}
		cout << f[a] << endl;
	}
}
