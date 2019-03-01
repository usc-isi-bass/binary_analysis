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

int a=1;
int yinzi(int j,int  n)
{   
    for(int i=j;i<n;i++)
	{
		if(n%i==0&&n!=i&&n/i>=i)
			{  
			    a++;
				yinzi(i,n/i);
			}
		
	}
	return 0;
			
}
int main()
{
	int n,s;
	cin>>s;
	for(int j=0;j<s;j++)
	{
		cin>>n;
		for(int i=2;i<=n;i++)
		{
			if(n%i==0&&n/i>=i)
			{
				a++;
		         yinzi(i,n/i);
			}
		}
	    cout<<a<<endl;
	    a=1;
	}
	return 0;
}