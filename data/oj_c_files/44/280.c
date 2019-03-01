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

int reverse(int num);
int m;
int main ()
{
	int num;
	int i=0;
	while(cin>>num)
	{
		reverse(num);
		cout<<m<<endl;
	}
	return 0;
}
int reverse(int num)
{
	int n=0,i;
	if(num==0||num==-0)
	{
		m=0;
		return m;
	}
	else if(num<0)
	{
		i=abs(num);
			while(i!=0)
			{
				n=n*10+i%10;
		        i=i/10;
			}
			m=-n;
			return m;
	}
	else if(num>0)
	{	
		i=num;
		while(i!=0)
			{
				n=n*10+i%10;
		        i=i/10;
			}
		m=n;
			return m;
	
	}
}








