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
	int m,n,h[20][20];
	cin >> m >> n;
	int i,j;
	for (i = 0; i<m;i++)
		for (j=0; j<n;j++)
			cin >>h[i][j];
	for (i = 0; i<m;i++)
		for (j=0; j<n;j++)
		{
			if(!(i - 1 >= 0 && h[i][j] < h[i-1][j])+ !(i + 1 < m && h[i][j] < h[i+1][j])+!(j - 1 >= 0 && h[i][j] < h[i][j-1])
				+!(j+ 1 <n && h[i][j] < h[i][j+1])==4)
				cout <<i <<' ' <<j <<endl;
		}
		return 0;
}