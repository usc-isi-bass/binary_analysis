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

int a[100001],b[100001],c[100001],x,y,p;
int main()
{
	int n,i;
	cin>>n;
	cin>>x>>y;
	while(x!=0||y!=0)
	{
		b[y]++;
		c[x]=1;
		cin>>x>>y;
	}
	for(i=0;i<n;i++)
	{
		if(b[i]==n-1&&c[i]==0)  
		{
			cout<<i<<endl;
			p=1;
		}
	}
	if(p==0)  cout<<"NOT FOUND"<<endl;
	return 0;
}

