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

//**************************************************************************
//*??????                                                            *
//*??? ???????????????????????????????   *
//*??????                                                            *
//*???2010?11?03?                                                    *
//**************************************************************************
int main()
{
	int a;                                                   //???????????????
	while (cin >> a)                                         //??????
	{   
		if (a != -1)                                         //????????-1
		{
		int i = 0, j, k, p = 0;                              //?????p?????
		int b[15] = {a};                                     //????????
	    while (b[i] != 0)                                    //???????????0????????
		{
	     	cin >> b[i + 1];
			i ++;                                            //?????????
		}
			for (j = 0; j < i; j ++)                    
			{
				for (k = j + 1; k < i; k ++)
					if (b[k] == 2 * b[j] || b[j] == 2 * b[k]) //?????????????2?
					{
						p = p + 1;                           //???????
					}
			}
				cout << p << endl;                           //??????
		}
	}
	return 0;
}
