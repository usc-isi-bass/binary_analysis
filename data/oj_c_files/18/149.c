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

void guiling(int a[][100], int);
void xiaojian(int a[][100], int);
int main()
{
    int n, a[100][100], k, i, j, sum;
	cin >> n;
	for(k = 0; k < n; k++)
	{
		sum = 0;
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				cin >> a[i][j];                //??n*n???
		for(int t = 0; t < n - 1; t++)         //??????n-1?????
		{
			guiling(a, n - t);				   //????????????????????????????1
			sum += a[1][1];                    //????????a[1][1]??????
			xiaojian(a, n - t);                //????????????
		}
		cout << sum << endl;                   //???????
	}
    return 0;
}
void guiling(int a[][100], int n)
{
	int i, j, min;
	for(i = 0; i < n; i++)
	{
		min = a[i][0];
		for(j = 0; j < n; j++)
			if(min > a[i][j])
				min = a[i][j];                 //???????????
		for(j = 0; j < n; j++)
			a[i][j] -= min;                    //?????????
	}
	for(i = 0; i < n; i++)
	{
		min = a[0][i];
		for(j = 0; j < n; j++)
			if(min > a[j][i])
				min = a[j][i];                 //???????????
		for(j = 0; j < n; j++)
			a[j][i] -= min;                    //?????????
	}
}
void xiaojian(int a[][100], int n)
{
	int i, j, k;
	for(i = 0; i < n; i++)
		for(j = 2; j < n; j++)
			a[i][j - 1] = a[i][j];             //??n-2?????????????????
	for(i = 2; i < n; i++)
		for(j = 0; j < n; j++)
			a[i - 1][j] = a[i][j];             //??n-2?????????????????
}