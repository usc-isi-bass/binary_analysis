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
	int f(int a,int b);
	int i,n,apple,plate;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>apple>>plate;
		cout<<f(apple,plate)<<endl;
	}
	return 0;
}
int f(int a,int b)//??????????
{
	int result;
	if(b==1&&a!=0) result=1;
	else if(a==0) result=1;
    else if(a>=b)
		result=f(a,b-1)+f(a-b,b);
	else result=f(a,a);
	return result;
}