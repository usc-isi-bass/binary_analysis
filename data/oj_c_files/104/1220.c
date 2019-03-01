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

int f(int x,int y);
int main()                        //????
{
	int x,y;
	cin >> x >> y ;
	cout << f( x, y) << endl;
	return 0;
}
int f(int x,int y)                //?????
{
	while(x!=y)                   //??x=y??x;?????????????????
	{
		if(x>y)
			x=x/2;
		else
			y=y/2;
		return f(x,y);
	}
	return x;                     //??????????
}
