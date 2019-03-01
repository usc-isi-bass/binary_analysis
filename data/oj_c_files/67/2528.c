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
	int n,t,e;
	float eff[100],mod;
	cin>>n;
	cin>>t>>e;
	mod=e*1.0/t;
	for(int i=0;i<n-1;i++)
	{
		cin>>t>>e;
		eff[i]=e*1.0/t;
	}
	for(int i=0;i<n-1;i++)
	{
		if((eff[i]-mod)>0.05)
			cout<<"better";
		else if((mod-eff[i])>0.05)
			cout<<"worse";
		else cout<<"same";
		cout<<"\n\n";
	}
	return 0;
}

