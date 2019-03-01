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
	int n=0;
	cin >> n;
	int a[n];
	int i,j=0;
	int f1,f2,p=0;
	for(i=1;i<=n;i++)
	{
		cin >> a[i];
	    f1=1;
	    f2=1;
	    p=1;
		if(a[i]==1||a[i]==2) cout <<"1" <<endl;
		else
		{
			for(j=1;j<=a[i]-1;j++)
			{
				p=f1;
				f1=f2;
				f2=f2+p;
			}
			cout << f1 <<endl;
		}
	}
return 0;
}