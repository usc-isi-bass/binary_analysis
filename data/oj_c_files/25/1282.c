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
??(11-12) ??2?N??
???
2013/11/14
**************************/
int main()
{
	int i, j, m, k,N, a[100]={0}, flag=0;
	cin >> N;
	a[0]=1;
	for(i=1; i<= N; i++)
	{
		for (j=0; j<=99; j++)
		{
			if (2 * a[j] +flag < 10 )
			{
				a[j] = 2 * a[j] +flag;
				flag = 0;
			}
			else 
			{
				a[j] = ( 2 * a[j] +flag ) % 10;
				flag = 1;
			}
		}

	}
	for (i=99 ; a[i]==0; i--)
		m=i;
	for (k=m-1; k>=0; k--)
		cout << a[k];
	return 0;
}
