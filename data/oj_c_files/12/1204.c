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

//*******************************
//????1.cpp                 *
//????? 1? 1200012895     *
//???2012?10?29?          *
//??????????????  *
//*******************************
int main()
{
	int x, a[16], i, j, n = 0, num= 0, m;        //x????????????a[]?x????i?j??????n????????
	                                             //num???????????m????????
	while (1)     
	{
        cin >> m;                        
		if (m == -1)                             //?????-1?????
			break;
		else
		{
			a[1] = m;                            //??????????????????1
		    n = 1;
		}
		for(i = 2; ; i++)
		{ 
			cin >> x;                            //??????????????0?????????????1
	        if (x == 0)
			     break;
	    	else
			{
			     a[i] = x;
	             n = n + 1;
			}
		}
	    for (i = 1; i <= n; i++)                 //????????????????????????1
		{
		    for (j = 1; j <= n; j++)
			{
		    	if (a[i] == (2 * a[j]))
			    	num = num + 1;
			}
		}
    	cout << num << endl;                     //???????????
		num = 0;
	}
	return 0;
}
