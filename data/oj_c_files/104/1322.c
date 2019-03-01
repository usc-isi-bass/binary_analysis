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

int f(int x ,int y)
{
	if(x==y)return x;
	if(x<y)return f(x,floor(y/2));
	if(x>y)return f(floor(x/2),y);
}
int main()
{
	int n=0;
	int X,Y=0;
cin>>X>>Y;
		cout<<f(X,Y)<<endl;
return 0;
}
