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


int n;
int f[20];

void fb(int i)
{
	if(i == 0 ||i ==1)
		f[i] = 1;
	else
		f[i] = f[i - 1] + f[i - 2];
}

int main()
{
	cin >> n;
	for(int i = 0;i < 20;i++)
		fb(i);
	while(n > 0)
	{
		int m = 0;
		cin >> m;
		cout << f[m - 1] << endl;

		n--;
	}
}