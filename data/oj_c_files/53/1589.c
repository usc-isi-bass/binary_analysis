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
	int a[500];
	int t=1,s;
	int i,j,k,l;
	cin>>a[0];
	cout<<a[0];
	for(i=1;i<n;i++)
	{
		cin>>s;
		for(j=0;j<t;j++)
		{
			if(s==a[j]) break;
		}
		if(j==t) {cout<<","<<s;a[t]=s;t++;}
	}
	cout<<endl;
	return 0;
}