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

//????????   ???  12858
int main()
{
	int a[100001];     //?????????
	int n = 0, i = 0, j = 0, k = 0;   //k???????n?????
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	cin >> k;
	for (i = 1; i <= n; i++)
		if (a[i] == k)            //????????????
		{
			for (j = i; j <= n-1; j++)
				a[j] = a[j+1];
			n = n-1;              //???-1
			i = i-1;              //??????????i?????????
        }
	for (i = 1; i <= n; i++)           //????
		if (i == n) 
			cout << a[i];
		else
			cout << a[i] << ' ';
    return 0;
}

			