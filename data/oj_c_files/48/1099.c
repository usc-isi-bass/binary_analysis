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

//*************************************************
//*3�D�?o�y�a(11.8) &#207;&#184;&#190;�?&#196;��&#214;3�&#235;�&#169;�?              *
//*D&#213;&#195;&#251;?oo&#206;&#212;&#198;&#198;e                                   *
//*&#209;�o&#197;?o1300012888                               *
//*�&#213;&#198;�?o2013.12.9                                *
//*************************************************

void change(int a,int area[][11],int area0[][11])
{
	int i, j;
	if(a == 0)
		return;
	else
	{
		for(i = 1;i <= 9;i ++)
		{
	    	for(j = 1;j <= 9;j ++)
		    	area0[i][j] = area[i][j];
		}
		for(i = 1;i <= 9;i ++)
		{
	    	for(j = 1;j <= 9;j ++)
			{
		    	area0[i][j] += area[i][j];
				area0[i - 1][j] += area[i][j];
				area0[i + 1][j] += area[i][j];
				area0[i][j - 1] += area[i][j];
				area0[i][j + 1] += area[i][j];
				area0[i + 1][j + 1] += area[i][j];
				area0[i - 1][j - 1] += area[i][j];
				area0[i + 1][j - 1] += area[i][j];
				area0[i - 1][j + 1] += area[i][j];
			}
		}
		for(i = 1;i <= 9;i ++)
		{
	    	for(j = 1;j <= 9;j ++)
		    	area[i][j] = area0[i][j];
		}
		change(a - 1,area,area0);
	}
}

int main()
{
	int area[11][11], area0[11][11], i, j;
	int num, day;

	cin >> num >> day;
	memset(area, 0, sizeof(area));
	memset(area0, 0, sizeof(area0));
	area[5][5] = num;
	change(day, area, area0);
	for(i = 1;i <= 9;i ++)
	{
		for(j = 1;j <= 9;j ++)
		{
			if(j == 1)
				cout << area[i][j];
			else
			    cout << " " << area[i][j];
		}
		cout << endl;
	}

	return 0;
}