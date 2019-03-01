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
	int a[301],n,i,j,p,del[301]={0};
	cin>>n;
	for(i=0;i<n;i++) 
		cin>>a[i];
	cout<<a[0];
	for(i=1;i<=n-1;i++)
	{
		for(j=0;j<=i-1;j++)
		{
			if(a[i]==a[j])
			{
				del[i]=1;
				break;
			}
		}
		if(del[i]==0) cout<<','<<a[i];
	}
	return 0;
}
