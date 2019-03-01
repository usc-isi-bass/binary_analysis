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

int main()
{
	int t;//???????
	cin>>t;
	int f(int,int);
	for(int i=1;i<=t;i++)
	{
		int m,n;
		cin>>m>>n;//m????n???
		int ans;
		ans=f(n,m);
		cout<<ans<<endl;
	}
	return 0;
}
int f(int pa,int pi)
{
	int c=0;
	
	if(pa==1||pi==0)
	{
		c=1;
	}
	if(pi<0)
	{
		c=0;
	}
	if(pa>1&&pi>=1)
		c=f(pa-1,pi)+f(pa,pi-pa);
	return(c);
}
