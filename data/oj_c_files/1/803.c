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

int number=0;
int main()
{
	void f(int first,int m);
	int n,i,num;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num;
		f(2,num);
		cout<<number/2<<endl;
		number=0;
	}
	return 0;
}
void f(int first,int m)
{
	int i;
	for(i=first;i<=m;i++)
	{
		
		if(m%i==0)
		{
			m=m/i; 
			f(i,m);	
			if(m!=1)
			m=m*i;
		
		}
	}
	if(m==1)
		number+=1;  
}
