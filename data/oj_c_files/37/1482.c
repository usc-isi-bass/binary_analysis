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
	int i,n,l,j,k,x[100000];
	char a[100000];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a;
        l=strlen(a);
		for(j=0;j<l;j++)
			for(k=0;k<l;k++)
			{
				if(a[j]==a[k])
					x[j]++;
			}
        for(j=0;j<l;j++)
			if(x[j]==1)
			{
				cout<<a[j]<<endl;
				break;
			}
		if(j==l)
			cout<<"no"<<endl;
		memset(a,0,100000);
		memset(x,0,100000);
	}
	return 0;
}