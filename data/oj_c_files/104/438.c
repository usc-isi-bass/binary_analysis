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
	int ec(int a,int b);     //?? ec????
	int x,y;
	cin>>x>>y;
	cout<<ec(x,y);               
	return 0;
}
int ec(int a,int b)       
{
	if(a==b)
		return a;           //??????        
	if(a>b)
	{	int t=a;              
		a=b;
		b=t;
	}
	return(ec(a,b/2));         //????
}