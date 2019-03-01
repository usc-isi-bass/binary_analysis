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

int f(int a,int b)
{
	if(a==b) return a;
	else if(a>b) {a=a/2;return f(a,b);}
	else {b=b/2;return f(a,b);}
}
int main()
{
	int x,y;
	cin>>x>>y;
	cout<<f(x,y)<<endl;
    return 0;
}
