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
	int n,i,j,num;
	int hei[30],max[30];
	cin >> n;
	for(i = 0; i < n;i ++)
	{
		cin >> hei[i];
		max[i] = 1;
	}
	for(i = 0; i < n;i++)
	{
		num = 0;
		for(j = 0; j < i ;j++)
		{
			if(hei[j] >= hei[i])
			{
				if(max[j] > num)
					num = max[j];
			}
		}
		max[i] = num + 1;
	}
	num = 0;
	for(i = 0;i < n;i++)
	{
		if(max[i] > num)
			num = max[i];
	}
	cout << num << endl;
	return 0;
}