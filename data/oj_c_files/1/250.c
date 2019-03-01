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

int f(int a,int b);
int main()
{
	int n,a,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a;
		cout<<f(a,2)<<endl;
	}
	return 0;
}
int f(int x,int y)  //y?????
{
	int j,k,t=0,m=0;
	for(j=2;j<x;j++)
		if(x%j==0) t++;
		if(t==0) return 1; //?????,??1
		else 
		{
			for(k=y;k<=(int)sqrt((double)x);k++)
				if(x%k==0) 	m=m+f(x/k,k);
			 return (m+1);
		}
}
