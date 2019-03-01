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
	int n;
	cin>>n;
	int a[100],b[100];
	int i;
	int j;
	for(i=0;i<n;i++)
		{
			cin>>a[i];
	}
	for(j=1;j<n;j++)
		
                 {
			b[j]=a[n-j];
			cout<<b[j]<<" ";
                   }
         for(j=n;j<=n;j++)
                   {
                      b[j]=a[n-j];
                     cout<<b[j];
                     }
	return 0;
}