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

int account(int m,int n)
{
	if(m==0)return 1;
	if(n==1)return 1;
	if(m<n) return account(m,n-1);
	return account(m-n,n)+account(m,n-1);
}
int main()
{
	int t,m=0,n=0;
	cin>>t;
	while(t>0)
	{
		cin>>m>>n;
		cout<<account(m,n)<<endl;
t--;
	}
	return 0;
}
