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

//**************************************
//*???????                     
//*????? 1100012780     	        
//*???2011.12.30                     
//**************************************
int main()
{
	int m,n;
	cin >> m >> n;
	int i,j;
	int height[22][22] = {0};//??????????
	for (i = 1;i <= m;i++)//???????0?????????
		for (j = 1;j <= n;j++)
			cin >> height[i][j];
	int count = 0;//??????????????
	for (i = 1;i <= m;i++)
		for (j = 1;j <= n;j++)
			if (height[i][j] >= height[i - 1][j] && height[i][j] >= height[i + 1][j] &&
				height[i][j] >= height[i][j + 1] && height[i][j] >= height[i][j - 1])
			{
				count++;
			}
	for (i = 1;i <= m;i++)
		for (j = 1;j <= n;j++)
			if (height[i][j] >= height[i - 1][j] && height[i][j] >= height[i + 1][j] &&
				height[i][j] >= height[i][j + 1] && height[i][j] >= height[i][j - 1])
			{
				count--;
				cout << i - 1 << " " << j - 1;
				if (count != 0)
					cout<<endl;
			}
	return 0;
}
