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

/*************************
??cpp5
????
???
2013/11/6
**************************/
int main()
{
	char a[101][101];
	int n, m, k, i,j,  cont=0;
	cin >> n;
	for (i=1; i<=n; i++)
	{
		for (j=1; j<=n; j++)
			cin >> a[i][j];
	}
	cin >> m;
	for (k=2; k <= m; k++)
	{
        for (i=1; i<=n; i++)
		{
		     for (j=1; j<=n; j++)
			 {
				 if (a[i][j] == '@')
				 {
					 if (j != 1 && a[i][j-1] =='.')
						 a[i][j-1] = '*';
                     if (j != n && a[i][j+1] =='.')
						 a[i][j+1] = '*';
                     if (i != 1 && a[i-1][j] =='.')
						 a[i-1][j] = '*';
                     if (i != n && a[i+1][j] =='.')
						 a[i+1][j] = '*';
				 }
			 }
		}
        for (i=1; i<=n; i++)
		{
		     for (j=1; j<=n; j++)
			 {
				 if (a[i][j] == '*')//???????????????????????*???????????????
					 a[i][j]= '@';
			 }
		}
	}
    for (i=1; i<=n; i++)
	{
		     for (j=1; j<=n; j++)
			 {
				 if (a[i][j]== '@')
					 cont ++;
			 }
	}
	cout << cont ;
	return 0;
}

