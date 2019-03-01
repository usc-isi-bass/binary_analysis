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


int num;

int wrh(int n,int r,int b[200],int y,int a)
{
	int i;
    for( i = y;i <= a/2;i ++ )
	{
		if ( r % i == 0)
		{
			b[n] = i;
			int now = 1,j;
			for ( j = 1;j <= n;j ++ )
				now = now * b[j];
			if ( now == a)
			{
				num ++;
				break;
			}
			if ( now > a) break;
			else 
				wrh(n + 1,r / i,b,i,a);
		}
	}
	return 0;
}

int main()
{
	
    int s,a,b[200];
	cin >> s;
	while (s > 0)
	{
		num = 0;
        cin >> a;
		wrh(1,a,b,2,a);
		cout << num + 1<<endl;
		s --;
	}
	return 0;
}
