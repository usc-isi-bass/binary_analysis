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

int reverse(int );
int re(int );
int main()
{
	int n,i;
	for(i=1;i<=6;i++)
	{
	cin>>n;
	n=reverse(n);
	cout<<n<<endl;
	}
	return 0;
}
int reverse(int n)
{
	int i,j,k=0,sum=0;
	while(n!=0)
	{
		if(((n%10)==0)&&(k=0)) n=n/10;
		else 
		{
			sum=sum*10;
			sum=sum+(n%10);
			n=n/10;
			k=1;
		}
	}
	return sum;
}