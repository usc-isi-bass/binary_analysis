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
	int m;
	cin >> m; 
	int a[10001] = {0};
	int b[10001] = {0};
	int t = 0;
	for(int i = 2; i < m; i++)  // ????????m???????a?
	{
		for(int j = 2; j < m; j++)
		{
			if( i * j > m || a[i*j] != 0 )
				continue;
			a[i*j] = i * j;
			//cout << a[i*j]<< "   ";
			b[t] = i * j ;
			//cout << b[t] << "  ";
			t ++;
			
		}
	}

	int x, p[10001] , q[10001]; 
	int p1, q1;
	for(int i = 3; i <= m/2; i = i + 2)
	{
		x = m - i;      // x ,i ?????
		//????????????
		for(int j = 0; j < t; j++) 
		{
			p[j] = b[j] - i;
			q[j] = b[j] - x;
		}
		p1 = 0;
		q1 = 0;
		for(int j = 0; j < t; j++)
		{
			if( p[j] != 0)
				p1 ++;
			if( q[j] != 0)
				q1 ++;
		}
		if( p1 == t && q1 == t)
			cout << i << " " << x << endl;

	}
	return 0;
}
		

