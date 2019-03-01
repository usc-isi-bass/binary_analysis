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

//****************************************
//*???????                       
//*?????? 1100012789      
//*???2011.11.14                       
//****************************************

int DoOneStep(int n);
int main()
{
	int n, result; // result??????
	cin >> n;
	result = n; // ???n
	for (; result > 1; ) // ????1??????
		result = DoOneStep(result);
	cout << "End" << endl; // ????End
	return 0;
}
int DoOneStep(int n)
{
	if (n % 2 == 0) // ?????
	{cout << n << "/2=" << n / 2 << endl;
	return (n / 2);}
	else // ?????
	{cout << n << "*3+1=" << n * 3 + 1 << endl;
	return (n * 3 + 1);}
}
