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

int devide(int m,int n);
int enb(int m,int n);
int unb(int m,int n);
int main()
{
	int t,i,m,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>m>>n;
		if(n!=1)
			cout<<devide(m,n)<<endl;
		else
			cout<<"1"<<endl;
	}
	return 0;
}

int enb(int m,int n)
{
	if(n==2)
		return 1;
	else
		return devide(m,n-1);
}

int unb(int m,int n)
{
	if(m<n)
		return 0;
	else
		return devide(m-n,n);
}

int devide(int m,int n)
{
	return enb(m,n)+unb(m,n);
}