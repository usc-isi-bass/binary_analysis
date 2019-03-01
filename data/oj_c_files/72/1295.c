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
	int a[30][30]={0},m=0,n=0;
	cin >> m >> n;
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
			cin >> a[i][j];
	for (int i=0;i<m;i++)
		for (int j=0;j<n;j++)
		{
			if (i>=1&&a[i-1][j]>a[i][j]) continue;
			if (i<m-1&&a[i+1][j]>a[i][j]) continue;
			if (j>=1&&a[i][j-1]>a[i][j]) continue;
			if (j<n-1&&a[i][j+1]>a[i][j]) continue;
			cout <<i <<' ' <<j <<endl;
		}
		return 0;
}