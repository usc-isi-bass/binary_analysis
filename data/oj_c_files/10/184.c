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

int dd(int no,float h);
int n,a[25];
int main()
{
	int i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<dd(1,10000)<<endl;
	return 0;
}
int dd(int no,float h)
{
	while(h<a[no-1])
	{	if(no==n)
			break;
	     no++;
	}
	if(no==n)
	{   
		if(h>=a[n-1])
		{return 1;}
	    else
		{return 0;}
	}
	else
	{
		int b=dd(no+1,a[no-1]);int c=dd(no+1,h);
		if (b>=c)
		{	return b+1;}
		else 
		{	return c;}
	}
}