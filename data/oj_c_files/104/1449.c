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
	int route(int x, int y);//????
	int x,y;
	cin>>x>>y;
	cout<<route(x,y);
	return 0;
}

int route(int x, int y)
{
	if(x==y)
		return x;
	else
	{
		if(x/2>=y)
			return route(x/2,y);
		else if(x<=y/2)
			return route(x,y/2);
		else
			return route(x/2,y/2);
	}
}