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
//*?????   **
//*?????? 1300012713 **
//*???2013.10.30  **
//********************************
int main() 
{ 
	int m, n, num, a[15]; //??????m????????n??????num???a[15]
	while (cin >> m) //???????
	{
		if (m == -1) return 0; //????-1??????
		else //???m????????
		{
		    int n = 1;
		    num = 0;
			a[0] = m;
			for(int i = 1; ; i++) //??????
			{
				cin >> a[i];
			    if(a[i] == 0) break; //????0?????????0
				if(a[i] != 0) n = n + 1;
			}
			for(int j = 0; j <= n; j++) //????????
			{
				for(int k = j+1; k <=n; k++)
				{
					if(a[j] == 2 * a[k] || a[k] == 2 * a[j])
						num = num + 1; //????
				}
			}
			cout << num << endl; //????
		}
	}
}



