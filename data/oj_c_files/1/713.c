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

int sum=1 ;
int kk(int a,int b)
{
	int i;
	for(i=b;i>=2;i--)
	    if(a%i==0)
			return a/i;
		return 0;
}
int seperate(int a,int b)
{
	int i;
	for(i=b;i>=2;i--)
	{
		if(a%i==0&&(a/i)<=i)
		{sum++;if((a/i)==2)continue;else seperate(a/i,a/i-1);}
		else if((a%i==0)&&((kk(a/i,i))!=0))
		{
			seperate(a/i,i);
		}
		
	}
	return sum;
}
int main()
{
	int n,i,m;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>m;
		cout<<seperate(m,m-1)<<endl;
		sum=1;
	}
	return 0;
}
