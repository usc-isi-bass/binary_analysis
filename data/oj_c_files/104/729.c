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
	int c(int x,int y);
	int x,y;//???x?y
	cin>>x>>y;
	cout<<c(x,y)<<endl;
return 0;
}

int c(int x,int y)//?????
{
	int z;
	if(x==y)//???????
		z=x;
	if(x>y)
		z=c(x/2,y);//???????
	if(y>x)
		z=c(x,y/2);
	return z;
}