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
	int n,k,y,h,i,m,x;
	while (cin >> n&&n!=0)
	{
		for (x=3;x<=n/2;x++)
		{
			k=(int)sqrt(x);
			y=n-x;
			for (i=2;i<=k;i++)
				if ((x%i)==0) break;
				if (i==k+1)
				{
					h=(int)sqrt(y);
					for (m=2;m<=h;m++)
						if ((y%m)==0) break;
						if (m==h+1)
							cout << x << " " << y << endl;
				}
		}
	
	}
	return 0;
}