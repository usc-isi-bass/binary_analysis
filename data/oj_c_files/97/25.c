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

int main(){
    int n,a,b,c,d,e,f,x;
	a=b=c=d=e=f=0;
	cin>>n;
	a=n/100;
	x=n%100;
	b=x/50;
	x%=50;
	c=x/20;
	x%=20;
	d=x/10;
	x%=10;
	e=x/5;
	f=x%5;
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f;
	return 0;
}
