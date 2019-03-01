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
	int a[5][5], max = 0, min = 9999999, i = 0,k = 0;
	for(i = 0; i < 5; i++)
		for(k = 0; k < 5; k++)
			cin>>a[i][k];
	for(i = 0; i < 5; i++)
		for(k = 0; k < 5; k++)
			{
				int n= 0;
				for(int q = 0; q < 5; q++)
				{
					if(a[i][k] >= a[i][q])
						n++;
					if(a[i][k] <= a[q][k])
						n++;
					if(n == 10)
						{
							cout << i + 1 << " " << k + 1 << " " << a[i][k] << endl;
							return 0;
						}
				}
			}
	cout << "not found" << endl;
	return 0;
}