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
	int n;
	cin>>n;
	int a[100000];
	int i,j,k,l=0;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cin>>k;
	for(i=0;i<n;i++)
	{
		if(a[i]!=k)
		{
			if(l==0) {cout<<a[i];l=1;}
			else cout<<" "<<a[i];
		}
	}
	cout<<endl;
	return 0;
}