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
	int n,m;
	cin>>n>>m;
	int f(int,int);
	cout<<f(n,m)<<endl;
	return 0;
}
int f(int a,int b)
{
	int cr;
	if(a==b) cr=a;
	else if(a>b) cr=f(a/2,b);
	else cr=f(a,b/2);
	return cr;
}