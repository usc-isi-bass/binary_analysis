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
//*??                         **
//*????? 1300012848        **
//*???2013.10.30             **
//********************************
int main()
{
	int i, j, k, a[16]={0}, count; //0????????????????????16??????????15+1??
	do
	{
		count = 0;
		cin >> a[0];
		if(a[0] == -1) //???-1?????? ????
			break;
		for(i = 1;; i++)
		{
			cin >> a[i];
			if(a[i] == 0) //??????0????????
				break;
		}
		for(j = 0; j < i; j++)
			for(k = 0; k < j; k++)
				if (a[k] == 2 * a[j] || 2 * a[k] == a[j]) //?????????????
					count ++;
		cout << count << endl;
	}while(1);
	return 0;
}