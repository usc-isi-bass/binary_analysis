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

int f(int x,int y)
{
	if(y==x)
		return 1; 
	if(y>x)
		return 0;
	if(x%y==0)
		return f(x,y+1)+f(x/y,y);
	else
		return f(x,y+1);
}
int main()
{
	int n,x;
	cin>>n;
	int z,i;
	i=n;
	while(i>0)
	{
		i=i-1;
		cin>>x;
		z=f(x,2);
		cout<<z<<endl;
	}
	return 0;
}

