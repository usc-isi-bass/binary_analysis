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
//*????? **
//*?????? 1300062706 **
//*???2013.10.30**
//********************************
int main()
{
	int a[16], num, i, j, k, n, cnt = 0;
	while (cin >> num)
	{
		if (num == -1)
			break;
		for (i=0;i<=15;i++)
		{
			if (num == 0)
				break;
			a[i] = num;
			cin >> num;
		}
		for (j=0;j<i-1;j++)
		{
			for (k=1;k<i-j;k++)
			{
			    if ((a[j] == 2 * a[j+k])||(a[j+k] == 2 * a[j]))
				    cnt ++;
			}
		}
		cout << cnt << endl;
		cnt = 0;
	}
	return 0;
}

	


		    
