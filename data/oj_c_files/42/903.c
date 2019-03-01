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
	int a[100001] , n , i = 1, j , k , count;
	cin >> n;
	count = n;
	for (i =1 ; i <=n ; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	i = 1;
	do 
	{
		if (a[i] == k)
		{
			for (j = i ; j <= count - 1 ; j++)
			{
				a[j] = a[j + 1];
			}
			a[count] = 0;
			count = count -1;
			i = i -1;
		}
		i++;
	}while (i <= count);
	for (i = 1 ; i <= count - 1 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << a[count] <<endl;
	return 0;
}
