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

int main()
{
	int a[100001] , b[100001];
    int i , j , step = 1;
    int n;
    cin >> n;
    for(i = 1; i <= n; i++)
    cin >> a[i];
    b[step] = a[1];
    cout << a[1];
    for(i = 2; i <= n ; i++)
    {
		for(j = 1; j <= step; j++)
		{
			if(a[i] == b[j])  break;	
		}
		if(j == step + 1)
		{
			step++;
			cout << " " << a[i];
			b[step] = a[i];
		}	
	}
	return 0;	
}
