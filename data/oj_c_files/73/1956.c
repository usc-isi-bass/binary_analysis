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
	int a[5][5], i, j, max, row, line, flag = 0;
	for (i = 0; i < 5; i ++)
	{
		for (j = 0; j < 5; j ++)
		{
			cin>>a[i][j];
		}
	}
	for (i = 0; i < 5; i ++)
	{
		max = a[i][0];
		row = i; 
		line = 0;
		for (j = 0; j < 5; j ++)
		{

			
			if (a[i][j] > max)
			{
				max = a[i][j];
				row = i;
				line = j;
			}
		}
		int k;
		for (k = 0; k < 5; k ++)
		{
			if (a[k][line] >= max)
				continue;
			else
				break;
		}
		if (k == 5)
		{
			flag = 1;
			cout<<row + 1<<" "<<line + 1<<" "<<max<<endl;
		}
	}
	if (flag == 0)
		cout<<"not found"<<endl;
	return 0;
}
