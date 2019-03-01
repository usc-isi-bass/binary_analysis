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

int B(int,int);
int main()
{
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;++i)
	{
		cin>>m>>n;
		int sum=0;
		for(int j=1;j<=n;++j)
			sum+=B(m,j);
		cout<<sum<<'\n';
	}
	return 0;
}

int B(int n,int k)
{
	if(k==1||n==k)
		return 1;
	else
	{
		if(k>n) return 0;
		else{
			int result=0;
			for(int l=k;l>0;--l)
				result+=B(n-k,l);
			return result;
		}
	}
}