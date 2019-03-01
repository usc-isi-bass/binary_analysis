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

int shorten(int a)
{
	while(a%10==0)
		a/=10;
	return a;
}
void reverse(int a)
{
	cout<<a%10;
	a/=10;
	if(a!=0)
		reverse(a);
}
int main()
{
	int a;
	for(int i=1;i<=6;i++)
	{
		int b=0;
		cin>>a;
		if(a<0)
			cout<<"-";
		a=abs(a);
		if(a>0)
			a=shorten(a);
		reverse(a);
		cout<<endl;
	}
	return 0;
}