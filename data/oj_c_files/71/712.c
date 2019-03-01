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
	while ( n -- )
	{
		int y,m1,m2;
		cin>>y>>m1>>m2;
		if ( y % 4 != 0 || ( y % 4 == 0 && y % 100 == 0 && y % 400 != 0 ))
		{
	         int zz[12]={0,31,59,90,120,151,181,212,243,273,304,334};
			 if ( ( zz[m1-1] - zz[m2-1] ) % 7 == 0)
				 cout<<"YES"<<endl;
			 else cout<<"NO"<<endl;
		}
		else
		{
			int zz[12]={0,31,60,91,121,152,182,213,244,274,305,335};
			 if ( ( zz[m1-1] - zz[m2-1] ) % 7 == 0)
				 cout<<"YES"<<endl;
			 else cout<<"NO"<<endl;
		}
	}
}