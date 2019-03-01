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

int main ()
{
	int n,i,sum=0,k=1;
	cin>>n;
	char a[1000][40];
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		if(k==1)
			sum=sum+strlen(a[i]);
		else 
			sum=sum+strlen(a[i])+1;
		if(sum<=80 && k!=1)
			cout<<" "<<a[i];
		else if(sum<=80 && k==1)
		{
			k=0;
			cout<<a[i];
		}
		if(sum>80)
		{
			cout<<endl;
			cout<<a[i];
			sum=strlen(a[i]);
		}
		else if(sum==80)
		{	
			cout<<endl;
			sum=0;
			k=1;
		}
	}
	return 0;
}
