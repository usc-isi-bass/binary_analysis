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


int main ()
{
    int a[5][5],max[5],min[5];
	int i,j,flag = 0;
	for (i = 0;i < 5;i++)
		for (j = 0;j < 5;j++)
           	cin >> a[i][j];
    for (i = 0;i < 5;i++)
		for (j = 0;j < 5;j++)
		{
			max[i] = a[i][0];
			min[j] = a[0][j];
		}
    for (i = 0;i < 5;i++)
		for (j = 0;j < 5;j++)
		{
		    if (a[i][j] >max[i] )
			{
			   max[i] = a [i][j];
			  			}
			if (a[i][j] < min[j])
			{
				min[j] = a[i][j];
							}
		}
		for (i = 0; i < 5;i++)
			for (j = 0;j < 5;j++)
			{
			    if (a[i][j] == max[i] && a[i][j] == min[j])
				{
				   cout << i+1 << " " << j+1 << " " << a[i][j];
				   flag = 1;
				   break;
				}
			}
			if (flag == 0)
				cout << "not found";
    return 0;
}