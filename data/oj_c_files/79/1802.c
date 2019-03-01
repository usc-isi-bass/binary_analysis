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
	int a[301],m,n;
	while(1)
	{
		cin>>n>>m;
		for(int i=1;i<=n;i++) a[i]=1;
		int j=0,k=n;
		if(n==0)break;
		while(1)
		{
			for(int i=1;i<=n;i++)
			{
				j += a[i];
				if(j==m)
				{
					a[i]=0;
					j=0;
					k--;
					if(k==0)
					{
						cout<<i<<endl;
						break;
					}
				}
			}
			if(k==0)break;
		}
	}
	return 0;
}
