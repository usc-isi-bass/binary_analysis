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
	int a[45] = {0};
	int n;

	
	cin >> n;
	
	a[0] = 1;
	
	for(int i = 0; i < n; i ++)
	{
		int bit = 0;
		int p;
		
		for(int j = 0; j <= 40; j ++)
		{
			p = a[j] * 2 + bit;
			a[j] = p % 10;
			bit = p / 10;
		}
	}
	
	int start;
	
	for(int i = 40; i >= 0; i --)
	if(a[i] != 0)
	{
		start = i;
		break;
	}
	
	for(int i = start; i >= 0; i --)
	cout << a[i];
	
	return 0;
}