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

//*************************
//??? 2.????????
//??  ??? 1200062705
//??    2012-11-3
//*************************
int main()
{
    int a[100001], n, i, j, k, number;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
	    cin >> number;
	    a[i] = number;
    }
    cin >> k;
    for (j = 1; j <= n; j++)
    {
    	if (a[j] == k)
        {
    		for(; j <= n; j++)
    		{
    			a[j] = a[j+1];
    		}
            j = 0;
            n = n - 1;
        }
    }
    for (i = 1; i < n; i++)
    {
    	cout << a[i] << " ";
    }
    cout << a[n];
}
