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

//******************************
//* author ?? 1200012955    **
//* date 2012.10.29           **
//* description ??          **
//******************************

int main()
{
	int i, j, k, num;                         //i,j,k?????num???????????
	double a[16];
	do                                        //?????????
	{
		for (i = 0; i <=15; i++)              //??????????
		{
			a[i] = 0;
		}
		num = 0;                              //???num
		for (i = 0; i <=15; i++)              //????
		{
			cin >> a[i];
			if (a[i] == 0 || a[0] == -1)      //????0?????????????????????-1???????
			{
				break;
			}
		}
		if (a[0] == -1)                       //??????-1?????
		{
			break;
		}
		for (j = 0; j <= i -1; j++)
		{
			for (k = j + 1; k <= i - 1; k++)
			{
				if (a[j] == 2 * a[k] || a[j] == a[k] / 2.0)    //??????????
				{
					num = num + 1;                             //?????
				}
			}
		}
		cout << num << endl;
	}
	while(1);

	return 0;		
}