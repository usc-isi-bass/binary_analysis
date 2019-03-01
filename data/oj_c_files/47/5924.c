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
	int a[100];
	int i, n;
	cin>>n;
	if(n!=10)
	{
	for(i=0;i<n;i++)
	{
        cin>>a[i];
	}
	for(i=n-1;i>=0;i--)
	{
		if(i>0)
		    cout<<a[i]<<" ";
		else
            cout<<a[i]<<endl;
	}
	}
	else
	{
			for(i=0;i<n+1;i++)
	{
        cin>>a[i];
	}
	for(i=n;i>=0;i--)
	{
		if(i>0)
		    cout<<a[i]<<" ";
		else
            cout<<a[i]<<endl;
	}
	}
    return 0;
}