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
	int	a[5][5];	//????5*5???
	int	q = 0, hang, lie;	
	for (int i = 0; i < 5; i ++)
	{
		for (int j = 0; j < 5; j ++)
		{
			cin >> a[i][j];
		}
	} 
	for (int i = 0; i < 5; i ++)
	{
		int 	p = 0;
		int	k;
		for (int j = 0; j < 5; j ++)
		{
			if (p < a[i][j])
			{
				p = a[i][j];				
				lie = j;
			}
		}
		for (k = 0; k < 5; k ++)
		{
			if (p > a[k][lie])
			{
				break;
			}
		}
		if (k == 5)
		{
			hang = i + 1;
			lie ++;
			cout << hang << " " << lie << " " << p << endl;
			q = 1;
		}
	}
	if (q == 0)
	{
		cout << "not found" << endl;
	}
return 0;
}