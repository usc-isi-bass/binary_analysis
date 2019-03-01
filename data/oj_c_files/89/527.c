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
	int n,i,j,k,g=0;
	int a[10000]={0};
	cin>>n;
	while(cin>>i>>j)
	{
		if(i==0&&j==0)
			break;
		else
			a[j]++;
	}
	for(k=0;k<n;k++)
	{
		if(a[k]==n-1)
		{
			cout<<k<<endl;
		    g=1;
		}
	}
	if(g==0)
		cout<<"NOT FOUND";
	return 0;
}

