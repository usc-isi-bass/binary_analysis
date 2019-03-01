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
	int k,i,n,m,a[300][300];
	while(cin >> n >> m)
	{
		if(n!=0)
		{
		   for(i=0;i<n;i++)
			   a[0][i]=i+1;
		   for(i=n-1;i>0;i--)
		   {
			   for(k=0;k<i;k++)
				   a[n-i][k]=a[n-i-1][(m+k)%(i+1)];
		   }
		   cout << a[n-1][0]<< endl;
		 }
	}
	return 0;
}