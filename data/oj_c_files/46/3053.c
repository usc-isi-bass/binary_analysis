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
//*??????? **
//*????? 1300012839 **
//*???2013.11.2**
//********************************
int main()
{
	int row,col,n,m,count=0;                              //?n????m????count??????????
	int array[100][100];
	cin >> n >> m;
	for(row = 0;row < n;row++)                               //????????
	{
		for(col = 0;col < m;col++)   
			cin >> array[row][col];
	}
	int k;
	for(k = 1;k <= n / 2 + 1;k++)                                //k????k?
	{
		for(col = k-1;col <= m - k;col++)                      //????????????????????????????count????????????
		{
				if(count == m * n)break;
				cout << array[k-1][col] << endl;
				count++;
		}
				
		for(row = k;row <= n - k;row++)
		{
			if(count == n * m)break;
		    cout << array[row][m-k] << endl;
			count++;
		}

		for(col = m - k - 1;col >= k - 1;col--)
		{
			if(count == n * m)break;
			cout << array[n-k][col] << endl;
			count++;
		}
        for(row = n - k - 1;row >= k;row--)
		{
			if(count == m * n)break;
			cout << array[row][k-1] << endl;
			count++;
		}
		if(count == n * m)break;
	}
	return 0;
}