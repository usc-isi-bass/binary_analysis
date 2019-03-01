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

int f(int m,int k);

int main()
{
	int n,i,k,m;//????n,????m,???k
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>m;
		k=2;
		cout<<f(m,k)<<endl;
	}
	
	
	
	
	
	
	return 0;
}
int f(int m,int k)
{
	int m1,sum=1;
	m1=m;
	while(k<=(int)sqrt(m))
	{
		if(m%k==0)
		{
			m=m/k;
			
			sum=sum +f(m,k);
		}
		m=m1;
		k++;
	}
	return sum;
}
	
