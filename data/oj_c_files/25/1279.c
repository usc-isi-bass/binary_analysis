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
//*?????2?N??  **
//*?????? 1300012946 **
//*???2013.11.15  **
//********************************
int main()
{
	int n,i,j,a[32]={1};
	cin>>n;
	for (i=0 ; i<n ; i++)
	{
		for (j=0 ; j<32 ; j++)
		{
			a[j] = 2 * a[j];
		}
		for (j=0 ; j<32 ; j++)
		{
			if (a[j]>9)
			{
				a[j] -= 10;
				a[j+1]++;
			}
		}
	}
	j=31;
	while (a[j]==0)
		j--;
	for ( ; j>=0 ; j--)
	{
		cout<<a[j];
	}
	return 0;
}