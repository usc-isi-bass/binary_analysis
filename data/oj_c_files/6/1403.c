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
	int a[100][100];								//???????????
	int k, m, n, i, j, sum,num;
	cin >> k;										//??????k
	while(k-- )
	{
		num = 0;
		sum = 0;									//?????????????0 
		cin >> m >> n;								//???????m???n
		for(i = 0; i < m; i++)
			for(j = 0; j < n; j++){
				cin >> a[i][j];	
				num += a[i][j];
			}
				//???????
		if(m ==1 || n == 1||(m==1&&n==1))cout << num << endl;
		else {
		for(i = 0; i < m; i += m - 1 )
			for(j = 0; j < n; j ++)
			{
				sum += a[i][j];						//???????
			}
		for(i = 0; i < m; i++ )
			for(j = 0; j < n; j += n - 1)
			{
				sum += a[i][j];						//???????
			}
		sum = sum - a[0][0] - a[0][n - 1] - a[m - 1][0] - a[m - 1][n - 1];
		cout << sum << endl;						//????????????????????????
	}
	}
		return 0;
}
