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
//*???????????       **
//*?????? 1300012773      **
//*???2013.10.30             **
//********************************
int main()
{
    int a[100000]; //???????·???100000???
    int n, k; //??i?j??????n??????????k????????
    cin >> n; //???????n

    //???n????????
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> k; //?????????

	for(int j = 0; j < n;)
	{
		if(a[j] == k)
		{
			for(int l = j; l <= n - 1; l++ )
			{
				a[l] = a[l + 1];
		
			}
			n --;
		}
		else j++;

	}

	cout << a[0];
	for(int i = 1; i < n; i++)
	{
		cout << ' ' << a[i];
	}

	return 0;
}
