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
//*????????????   **
//*?????? 1200012964 **
//*???2012-11-19  **
//********************************

void fact(int n);                      //??????
int sum(int n);                        //????sum
int a[100][100]; 
int i = 0, j = 0;                      //??????
int main()
{
	int n;                             //n?????
	cin >> n;
	int k = 0;
	for (k = 1; k <= n; k++)
	{
		for (i = 0; i < n; i++)
			for (j = 0; j < n; j++)
				cin >> a[i][j];
			cout << sum(n) << endl;    //????
	}
	return 0;
}
void fact(int n)                       //????
{
	//?????????
	for (i = 0; i < n; i++)
	{
		int min = a[i][0];
		for (j = 0; j < n; j++)
			if (a[i][j] < min)
				min = a[i][j];
			for (j = 0; j < n; j++)
				a[i][j] -= min;
	}
	//?????????
	for (i = 0; i < n; i++)
	{
		int min = a[0][i];
		for (j = 0; j < n; j++)
			if (a[j][i] < min)
				min = a[j][i];
			for (j = 0; j < n; j++)
				a[j][i] -= min;
	}
}

int sum(int n)                         //sum????
{
	fact(n);
	if (n == 2)
		return a[1][1];                //?n?2?????a[1][1]
	int k = a[1][1];
	//????
	for (i = 1; i < n - 1; i++)
	{
		a[0][i] = a[0][i + 1];
		a[i][0] = a[i + 1][0];
		for (j = 1; j < n - 1; j++)
			a[i][j] = a[i + 1][j + 1];
	}
	return k + sum(n - 1);              //??
}