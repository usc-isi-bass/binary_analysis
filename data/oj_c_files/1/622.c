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

int fen(int a,int k)
{
	int s=0,j,t=0;
	if(a==1&&a>=k)
	{
		s=1;
	}
	else if(a==k)
	{s=1;}
	else
	{
		for(j=2;j<=a;j++)
		{
			if(a%j==0&&j>=k)
			s=s+fen(a/j,j);
			t=1;
		}
		if(t==0)
		s++;
		
	}
	return s;
}
int main()
{
	int n,i,q,a;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		cout<<fen(a,1)<<endl;
	}
	cin>>q;
	return 0;
}