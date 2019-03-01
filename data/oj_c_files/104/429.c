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

int cmp(int x,int y)//????cmp
{
	if(x==y)//???????x
		return x;
	else//??????????2????????
	{
		if(x>y)
		{
			x=x/2;
		}
		if(x<y)
		{
			y=y/2;
		}
		cmp(x,y);
	}
}
int main()//???
{
	int x,y;//??????x,y
	cin>>x>>y;//????
	cout<<cmp(x,y);//?????????
	return 0;
}

