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
	int a[100001],n,i,m,l,k;
	cin>>n;
    for (i = 1;i <= n;i++) cin >> a[i];
	cin >> k;
	a[n+1] = k;
	l = 2;
	for(i=n;i>=1;i--)
	{ 
		if(a[i] == k)
		{	
			for (m = i; m <= n; m++) a[m] = a[m+1];
		}
	}
	cout << a[1];
	while(a[l] != k)
	{
	    cout << " " << a[l];
	    l = l + 1;
	}
cout<<endl;
	return 0;
}