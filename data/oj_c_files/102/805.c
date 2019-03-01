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
	int n, i, p, j = 0, k = 0;
	double tempHeight;
	cin >> n;
	struct student
	{
		char sex[7];
		double height;
	}student[41];

	int count = 0;
	double maleHeight[41] = {0}, femaleHeight[41] = {0}; 
	for(i = 0; i < n; i++)
	{	
		cin >> student[i].sex >> student[i].height;
		if(student[i].sex[0] == 'm')	
			count++;
	}

	for(i = 0; i < n; i++)
	{
		if(student[i].sex[0] == 'm')
			maleHeight[i] = student[i].height;
		if(student[i].sex[0] == 'f')
			femaleHeight[i] = student[i].height;
	}

	for(i = 0; i < n - 1; i++)
	{	
		for(p = 0; p < n - 1 - i; p++)
		{
			if(maleHeight[p] > maleHeight[p + 1])
			{
				tempHeight = maleHeight[p];
				maleHeight[p] = maleHeight[p + 1];
				maleHeight[p + 1] = tempHeight;
			}
		}
	}
	for(i = 0; i <= n - 1; i++)
	{
		for(p = 0; p <= n - 1 - i; p++)
		{
			if(femaleHeight[p] < femaleHeight[p + 1])
			{
				tempHeight = femaleHeight[p];
				femaleHeight[p] = femaleHeight[p + 1];
				femaleHeight[p + 1] = tempHeight;
			}
		}
	}

	cout << fixed;
	for(i = 0; i < n; i++)
	{
		if(maleHeight[i] != 0)
		{
			j = i;
			cout << setprecision(2) << maleHeight[j];
			break;
		}
	}
	for(i = j + 1; i < n; i++)
	{
		if(maleHeight[i] != 0)
			cout << setprecision(2) << " " << maleHeight[i];
	}
	for(i = 0; i < n; i++)
	{
		if(femaleHeight[i] != 0)
			cout << setprecision(2) << " " << femaleHeight[i];
	}	
	return 0;
}