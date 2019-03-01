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
	int n, i,j,max,final;
	int tomb[26];
	int num[26];
	cin >> n;
	for (i =0; i<n;i++)
		cin >> tomb[i];
	memset(num,0,sizeof(num));
	num[n-1]=1;
	final = 0;
	for(i=n-2;i>=0;i--)
	{
		j = i+1;
		max = 0;
		while (j < n)
		{
			if (tomb[j] <= tomb[i] && num[j] > max)
				max = num[j];
			j ++;
		}
		num[i] = max + 1;
		if (num[i] > final)
			final = num[i];
	}
	cout << final << endl;
	return 0;
}