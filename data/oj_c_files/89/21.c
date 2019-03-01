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

int a[10000];
int b[10000];
int main()
{
	int n,p,q,i;
	cin>>n;
	for(i=0;i<n;i++)
		a[i]=0;
    	cin>>p>>q;
	while(p!=0||q!=0)
	{	
		a[p]++;b[q]++;
		cin>>p>>q;
	}
	for(i=0;i<n;i++)
		if(a[i]==0&&b[i]==n-1)
		{cout<<i<<endl;return 0;}
			cout<<"NOT FOUND"<<endl;
			return 0;
		
}