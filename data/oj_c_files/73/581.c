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

//***************************
//*???????          **
//*????? 1300012921   **
//*???2013.11.05        **
//*************************** 
int main()

{
	int a[6][6];
	
	for(int i = 1; i <= 5; i++)
	{
		for(int j = 1; j <= 5; j++)
			cin >> a[i][j];
	}
	
	int max, min, row, col, flag = 0;
	for(int i = 1; i <= 5; i++)
	{
		col = 1;
		max = a[i][1];
		for(int j = 2; j <= 5; j++)
		{
			if(a[i][j] > max)
			{ 
				max = a[i][j];
				col = j;
			} 
		}
		
		row = 1;
		min = a[1][col];
		for(int k = 2; k<= 5; k++)
		{
			if(a[k][col] < min)
			{	
				min = a[k][col];
				row = k;
			} 
		}
		
		if(row == i)
		{
			cout << row << " " << col << " " << a[row][col] << endl;
			flag += 1;
		}
		else
			flag += 0;
	}
	if(flag == 0)
		cout << "not found" << endl;
	return 0;
 } 