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
	int a[1000];
	int b[1000];
	char c;
	int i = 0 ,g =0, l = 0;
	do
	{
		cin >> a[i];
		c = cin.get();
		i ++;
	}while(c != '\n');
	for(int j =0;j <= i - 1;j ++)
	{
		cin >> b[j];
		cin.get();
	}
	for(int p = 1; p <= 1000; p ++)
	{
		for(int k =0; k <= i - 1; k ++)
		{
			if(p >= a[k] && p < b[k])
				g ++;
		}
		if(g >l)
			l = g;
		g = 0;
	}
	cout << i << " " << l;
	return 0;
}



	