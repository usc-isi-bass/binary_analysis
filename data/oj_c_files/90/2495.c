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

//***********************
//*??????         **
//*??????         **
//*???2013.11.29     **
//************************
int put(int a,int b)
{
	if(b<=0||a<0)
	{
		return 0;
	}
	else
	{
		if(a==1||b==1||a==0)
		{
			return 1;
	    }
		else
		{
			return (put(a-b,b)+put(a,b-1));
		}
	}
}
int main()
{
	int k,i,m,n;
	cin>>k;
	cin.get();
	for(i=1;i<=k;i++)
	{
		cin>>m>>n;
		cout<<put(m,n)<<endl;
	}
	return 0;
}