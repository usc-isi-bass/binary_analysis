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

int sum=0;
int apple(int m,int n)
{
	sum=0;
	if(m==0&&n>0)
	return 1;
	if(m==1&&n>0)
	return 1;
	if(m>0&&n==1)
	return 1;
	if(m<0)
	return 0;
	sum=apple(m,n-1)+apple(m-n,n);
	return sum;
}
int main()
{
	int q,t,i,m,n;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		
		cin>>m>>n;
		cout<<apple(m,n)<<endl;
	}
	cin>>q;
	return 0;
}
