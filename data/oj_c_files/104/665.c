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

int up(int x)                         //????????????????
{
	if(x%2==1)return (x-1)/2;
	else return x/2;
}
int main()
{
	int x,y;
	cin>>x>>y;
	while(x!=y)                  //?x???y????????
	{
		if(abs(x-y)==1)         //?????x?y??????????
		{
			y=up(y);   
			x=up(x);
		}
		else
		{
			if(y>x)y=up(y);  //????????????
			else x=up(x);
		}
	}
	cout<<x<<endl;   // ????????
	return 0;
}
