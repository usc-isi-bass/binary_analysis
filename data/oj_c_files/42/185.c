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
	int sum=1,j,i,k=0,n,m,a[101001]={0};
    cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>m;
	for(i=1,j=1;j<=n;j++)
	{

		   if(a[j]!=m)
		        a[i++]=a[j];
	

	}

	
	for(k=1;k<=i-1;k++)
    {
		if(k==1)
		{
			cout<<a[k];
		}
		else
		{
			cout<<" "<<a[k];
		}
	}
		  
	
    
	return 0;
}

