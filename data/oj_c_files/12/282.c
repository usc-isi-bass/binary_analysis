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

/*   ???????
     ???????
	 ?????2010?11?5?
	 ???????????????????????????????????
*/
int main()
{
	int num[15]={0} , i , j , a , b=0 , m ;
	do
	{   for (m = 0 ; ; m ++)
		{
		cin >> a ;
	    num[m] = a ;
		if (a == 0) break ;
		if (a == -1) break ;
		}
		for (i = 0 ; i <= m ; i ++)
			for (j = 0 ; j <= m ; j ++)
				if((num[i] != 0 && num [j] != 0 && num[i] * 2 == num[j]) || (num[i] != 0 && num [j] != 0 && num[j] * 2 == num[i]))   b++;
		if (a != -1)  { cout << b/2 << endl ; b=0 ; }
	} while(a != -1);
	return 0 ;
}
