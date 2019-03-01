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

//??  ???  1100012858

int main()
{
	int num [16];   //??????
    int i = 1;  //????i?????????+1
	int n;
	int j,k,ans;   //ans?????
	i = 1;         //???????
	do 
	{
		cin >> n;    //n????????
		if (n != -1)
		{
			if (n == 0)
			{
			   ans = 0;
	           for (j = 1;j <= i-1;j++)
		           for (k = 1;k <= i-1;k++)
			           if (num[j] == 2*num[k])
				          ans += 1;
	           cout << ans << endl;
	           i = 1;              //???????
			}                                 //?????????????
			else
			{
				num[i] = n;                  //??????????
				i += 1;
			}
		}
	}while (n != -1);
	return 0;
}



	

	
