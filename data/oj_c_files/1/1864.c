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

void f(int,int);
int sum=0,res=1;
int main()
{
	int n,a,i,j;
	cin>>n;
	for(i=0;i<n;i++)		//n???
	{
		res=1;				//??????a=a
		cin>>a;
		for(j=2;j<=(int)sqrt((float)a);j++)			//??????
		{
			if(a%j==0)
			{
				sum=0;
				f(a/j,j);			//????????
				res+=sum;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}
void f(int x,int y)
{
	if(x==1)
		sum++;
	while(y<=x)			//?????????????
	{
		if(x%y==0)
			f(x/y,y);
		y++;
	}
	return;
}
