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

/*
??? 
1000012905  
*/
int main()
{
	int	n, i, j, k, g, p = 0;
	
	//?? 
	cin >> n;
	int 	a[n + 1];
	memset(a, 0, sizeof(a));
	for (i = 1; i <= n; i ++)
	{
		cin >> a[i];
	}
	
	//??????? 
	for (j = 1; j <= n; j ++)
	{
		g = 0;
		
		//????????? 
		for (k = 1; k <= j-1; k ++)
		{
			if (a[j] == a[k])
			{
				g = 1;
			}
		}
		
		//????????????? 
		if (g == 0)
		{
			if (p != 0)
			{
				cout << " ";
			}
			cout << a[j];
			p ++;		//???????? 
		}
	}
	return 0;
}