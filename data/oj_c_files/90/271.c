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

int c(int , int);
int main()
{
	int n ;
	cin>>n;
	for(int i = 0 ;  i<n ; i++)
	{
		int a , b;
		cin>>a>>b;
		int sum=0;
		sum = c(a,b);
		cout<<sum<<endl;
	}
	return 0;
}
int c(int a ,int b )
{
	int sum = 0;
	if(a==1||a==0||b==1||b==0)
		return 1 ;
	if(a>=b)
	{
		sum=c(a,b-1)+c(a-b,b);
		return sum ;
	}
	if(a<b)
	{
		sum = c(a,a);
		return sum ;
	}
}
