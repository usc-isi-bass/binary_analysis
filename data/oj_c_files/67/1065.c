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
	int i,n;
	double k,s,g[200];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		cin>>s;
		g[i]=s/k;
	}
	for(i=2;i<=n;i++)
	{
		if(g[1]-g[i]>0.05)
			cout<<"worse"<<endl;
		if(g[i]-g[1]>0.05)
			cout<<"better"<<endl;
		if(g[i]-g[1]<=0.05&&g[i]-g[1]>=(-0.05))
			cout<<"same"<<endl;
	}
	return 0;
}

