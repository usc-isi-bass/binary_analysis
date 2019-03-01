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

//***********************************
//*????7???????         **
//*?????? 1000012741         **
//*???2010.10.14                **
//***********************************
int main()  //???
{
	int n , sum = 0;//??n,sum?????,sum
	cin >> n;//????n??
	for (int i = 1; i <= n; i++)//??????
	{
		//??????
		if (( i%7 != 0) && (( i >= 1 && i < 70 )||( i >= 80 && i < 100)) && ((i - 7) % 10 != 0))
		{
			sum = sum + i * i;//?????
		}
	}
		cout << sum << endl;//???????
		return 0;//?????
}
//***********************************