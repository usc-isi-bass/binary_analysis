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

int num[100000], n, i, j, k, m, l;
int main()
{
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	for(j = 0; j < n - 1; j++)
		for(k = j + 1; k < n; k++)
		{
			if(num[j] == num[k]) 
				{num[k] = 0;}
		}
	for(m = 0, l = 0; m < n; m++)
	{
		if(num[m] >= 10) 
		{	
			l++;
			if(l == 1) {cout << num[m];}
			else {cout << " " << num[m];}
		}
	}cin>>i;
	return 0;
}