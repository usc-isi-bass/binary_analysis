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
	int common(int,int);
	int x=0,y=0;
	cin>>x>>y;
	cout<<common(x,y)<<endl;
	return 0;
}
int common(int x,int y)
{
	if(x==y)
		return x;
	if(x>y)
		return common(x/2,y);
	else
		return common(x,y/2);
}
