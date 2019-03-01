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

void daoxu(int n);
int main()
{
	int n;
	cin>>n;
	int b;
	cin>>b;
	daoxu(n-1);
	cout<<b;   //???????
	
	return 0;
}
void daoxu(int n)  //??
{
	int a;
	cin>>a;
	if(n==1)cout<<a<<' ';
	else {daoxu(n-1);
	cout<<a<<' ';}
}

