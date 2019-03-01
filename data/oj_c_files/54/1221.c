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



int main ()
{
	int n,k,i;
	cin >> n >>k;
	int a[1001];
	for (int t=1;1;t++)
	{
		a[n]=t*(n-1);
		for (i=n-1;i>=0;i--)
		{
			if(a[i+1]%(n-1)==0)
				a[i]=n*a[i+1]/(n-1)+k;
			else break;
		}
                  if (i==-1) break; 
	}
	cout << a[0]<<endl;
	return 0;
}