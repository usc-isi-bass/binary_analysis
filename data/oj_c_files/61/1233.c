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
//*    ??????                 *
//*    ??????                 *
//*    ?????2011?10?2?      *
//***********************************
int main()
{
	int a , x1 , x2 , x3 , i , j , n;
	cin >> n;
	for(i = 1;i <= n; i = i + 1)
	{
		cin >> a;//a?????,1<=a<=20
		x1 = 1;
		x2 = 1;//x1,x2?????????
		if(a == 1 || a == 2)
			cout << "1" << endl;//???????1?????
		else
		{
			for(j = 1;j <= a - 2;j = j + 1)//?a?????a-1???
			{
				x3 = x1 + x2;
				x1 = x2;
				x2 = x3;//????????????
			}
				cout << x3 << endl;
		}
	}
	return 0;
}