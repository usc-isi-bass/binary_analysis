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

int step(int,int);
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<step(x,y)<<endl;
}
int step(int a , int b )
{
	if ( a > b )
	{
		if ( a % 2 == 0 )
			return step( a/2 , b );
		else
			return step( (a - 1) / 2 , b );
	}
	else if ( a < b )
	{
		if ( b % 2 == 0 )
			return step( a , b/2 );
		else
			return step( a , ( b-1) / 2 );
	}
	else
		return a;
}