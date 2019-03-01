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
	int n,n0,flag=0;
	cin >> n;
	n0=n;
	if(n%3==0){n/=3;cout<<"3";flag=1;}
	if(n%5==0){
	if(n!=n0)cout<<" ";n/=5;
	cout<<5;flag=1;}
	if(n%7==0)
	{
	if(n!=n0)cout<<" ";n/=7;
	cout<<7;flag=1;}
	if(flag==0)cout<<'n';
	cout<<endl;
	return 0;
}
