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

//********************************
//*???????     **
//*?????? 1300012887 **
//*???2013.11.03 **
//********************************
int main()
{
	char a[102][102];
	int b[102][102], n, m, i, j, k, l = 0;
	cin >> n; 
	cin.get();
	for (i = 0; i <= n-1; i++) 
	{
		for (j = 0; j <= n-2; j++)
			cin >> a[i][j];    //???????
		cin >> a[i][j];
		cin.get();
	}
	cin >> m;
	for (i = 0; i <= n-1; i++)
		for (j = 0; j <= n-1; j++)
			if(a[i][j] == '@')    //????????
				b[i][j] = 1;
	for (k = 2; k <= m; k++)    //????????
	{
		l = 0;
    	for (i = 0; i <= n-1; i++) 
		{
		    for (j = 0; j <= n-1; j++)    //???????????????
			{
				if(a[i][j] == '@')
				{   
     		        if (a[i-1][j] == '.')
				        b[i-1][j] = 1;
			        if (a[i+1][j] == '.')
				        b[i+1][j] = 1;
			        if (a[i][j-1] == '.')
				        b[i][j-1] = 1;
			        if (a[i][j+1] == '.')
				        b[i][j+1] = 1;
				}
			}
		}
	for (i = 0; i <= n-1; i++)
		for (j = 0; j <= n-1; j++)
		   	if (b[i][j] == 1)
			{
				a[i][j] = '@';
            	l++;    //???m????????
			}  
	}
	cout << l;    //????
	return 0;
}

