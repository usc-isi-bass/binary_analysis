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

int n,i;
void get();
void fanxu(int n);
int main()
{
	int j;
	for(j=1;j<=6;j++)
	{
		get();
		i=0;
		fanxu(n);
	}
	return 0;
}
void get()
{
	cin>>n;
	if(n<0) cout<<"-",n=-n;
	if(n==0) cout<<"0";
}
void fanxu(int n)
{
	if(n>0)
	{
		if(n%10!=0||i==1) cout<<(n%10),i=1;
		fanxu(n/10);
	}
	else cout<<endl;
}