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
//*??  ??????        *****
//*????? 1300012753     ***** 
//*???2013.11.20          *****   
//********************************
int cal(int i)
{
	if(i == 1 || i == 2)
	return 1;
	else
	return cal(i - 1) + cal(i - 2);
}
int main()
{
	int n;
	cin >> n;
	int a[100];
	for(int i = 1; i <= n; i++)
	{
		int t;
		cin >> t;
		a[i] = cal(t); 
	}
	for(int i = 1; i <= n; i++)
	cout << a[i] << endl;
	return 0;
}