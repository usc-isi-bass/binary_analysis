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

int a[300];
int main()
{
	int n,m,s,k,p;
	int i,j;
	while(cin>>n>>m,n||m)
	{
		for(i=0;i<n;i++)
		a[i]=1;
		p=n;
		if(n==1)cout<<1<<endl;
		else
		{
		a[(m-1)%p]=0;
		s=((m-1)%p+1)%p;
		for(n--;n>1;n--){
			k=m;
			while(k>1){
				if(a[s]==1){k--;}
				s++;
				s%=p;
			}	
			while(a[s]==0)
			{s++;s%=p;}
			a[s]=0;//cout<<s<<endl;
		}
		for(i=0;i<p;i++)
		if(a[i])
		cout<<i+1<<endl;
	}
	}
	return 0;
}
		