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

int  common(int x,int y); 
int main()
{
	int x,y;
	while(cin>>x>>y)
	{
		cout<<common(x,y);
	}
	return 0;
}
int common(int x,int y)
{
	if(x==y)
	return x;
	else
	{
		int p;
		if(x>y)
		return common((int)x/2,y);
		else
		return common(x,(int)y/2);
	}
}
