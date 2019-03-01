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
//*???????????  **
//*?????? 1300012965 **
//*???20131204          **
//***************************
int a[10][10] = {0},biaoji[10][10] = {0};
void f(int n)
{
	int p, q, u, v;
	if(n == 0)
		return;
	for(p=1; p <= 9; p++)
		for(q=1; q <= 9; q++)
		{
			if(a[p][q] != 0)
			{
				biaoji[p][q] += 2*a[p][q];//???????
				biaoji[p-1][q+1] += a[p][q];
				biaoji[p-1][q] += a[p][q];
				biaoji[p-1][q-1] += a[p][q];
				biaoji[p][q-1] += a[p][q];
				biaoji[p][q+1] += a[p][q];
				biaoji[p+1][q-1] += a[p][q];
				biaoji[p+1][q] += a[p][q];
				biaoji[p+1][q+1] += a[p][q];
			}
		}
	for(u=1; u<=9; u++)
		for(v=1; v<=9; v++)
			a[u][v] = biaoji[u][v];//????????
	memset(biaoji,0,sizeof(biaoji));//????
	f(n-1);//??
}

int main()
{
	int m, n, i, j;
	cin >> m >> n;
	a[5][5] = m;//??????
	f(n);
	for(i=1; i<=9; i++)
	{
		cout << a[i][1];
		for(j = 2; j <= 9; j++)
			cout << " " << a[i][j];
		cout << endl;
	}
	return 0;
}