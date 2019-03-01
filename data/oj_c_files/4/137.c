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

const int maxn = 100; 

int main() 
{
	int line,row; 
	int num[maxn][maxn]; 
	cin >> line >> row; 

	int nowline, nowrow; 
	int step; 
	int i , j; 
	for ( i = 0; i!=line; i++) 
		for ( j = 0; j!=row; j++) cin>>num[i][j]; 
	for (step = 0; step != line+row-1; step++)
	{
		nowline = (step >= row? step-row+1 : 0); 
		nowrow = (step >=row? row-1 : step); 
		while (nowline != line && nowrow != -1)
		{
			cout << num[nowline][nowrow] << endl; 
			nowline++; nowrow--; 
		}
	}
	return 0; 

}