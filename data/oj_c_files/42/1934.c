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
//*??????????? **
//*?????1300062805 **
//*???2013.11.1 **
//********************************
int main()
{
	int n, k, i, m=0,j;  
	int a[100001];
	cin >> n;
	for ( i = 0; i < n; i++)         // ????
	{
		cin >> a[i];
	}
	cin >> k;
    i=0;
	do
	{
		if ( a[i] == k )            // ???????????
        {
	m++;                            // ??????????????????
			for ( j = i+1;  j < n; j++)
			{
				a[j-1]=a[j];
			}
		}
		while(a[i]!=k)              // ?????????????
		i++;
	}while (i < n-m);
	for ( i=0; i <n-m-1 ; i++)        // ????
		cout << a[i] << " ";
	    cout << a[n-m-1];
	return 0;
}
