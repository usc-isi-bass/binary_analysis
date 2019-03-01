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

void half(int x,int y)
{
	if(x==y)
		cout<<x<<endl;
	else if(x>y)
	{
		x=x/2;
		half(x,y);
	}
	else
	{
		y=y/2;
		half(x,y);
	}
}
int main()
{
	int x,y;
	cin>>x>>y;
	half(x,y);
	return 0;
}
