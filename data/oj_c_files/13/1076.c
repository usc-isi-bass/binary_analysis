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
//*???????????                      
//*?????? 1100012789      
//*???2011.12.11                       
//****************************************

int main()
{
	int flag[100] = {0}, i, n, temp;
	cin >> n;
	cin >> temp;
	flag[temp] = 1;
	cout << temp;
	for (i = 1; i < n; i++)
	{
		cin >> temp;
		if (flag[temp] == 0)
		{
			cout << " " << temp;
			flag[temp] = 1;
		}
	}
	return 0;
}