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




const int MaxSize = 1010;
int t[ MaxSize ], q[ MaxSize ];

int main()
{
	int N;
	while ( cin >> N && N != 0 )
	{
		for ( int i = 0; i < N; i++ )
			cin >> t[ i ];
		for ( int i = 0; i < N; i++ )
			cin >> q[ i ];

		sort( t, t+N );
		sort( q, q+N );

		int ans = 0;
		int tSt = 0, tEnd = N-1;
		int qSt = 0, qEnd = N-1;

		while ( tSt <= tEnd )
		{
			if ( t[ tEnd ] > q[ qEnd ] )
			{
				ans += 200;
				tEnd--;
				qEnd--;
			}
			else if ( t[ tSt ] > q[ qSt ] )
			{
				ans += 200;
				tSt++;
				qSt++;
			}
			else
			{
				if ( t[ tSt ] < q[ qEnd ] )
					ans -= 200;
				tSt++;
				qEnd--;
			}
		}
		cout << ans << endl;
	}
	
	return 0;
}
	
