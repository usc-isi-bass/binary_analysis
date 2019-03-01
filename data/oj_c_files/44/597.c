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

void reverse( int num);
int main()
{

	
	int num;
	for(int i=0;i<6;i++)
	{
		cin>>num;
		if(num==0||num==-0)
			cout<<"0";
		else
		{
			reverse(num);
		}
	}
	return 0;
}
void reverse(int num)
{
	int x;
	if (num<0)
	{
		num=0-num;
		cout<<'-';
	}
	if(num!=0)
	{
		if(num%10==0)
		{
			for(;num%10==0;)
				num/=10;
			for(;num!=0;num/=10)
			{
				x=num%10;
				cout<<x;
			}
			cout<<endl;
		}
		else
		{
			for(;num!=0;num/=10)
			{
				x=num%10;
				cout<<x;
			}
			cout<<endl;
		}
	}
		
}