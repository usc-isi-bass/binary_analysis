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

int a[100002];
int main()
{
	int n,k,i,m;
	cin>>n;
	for (i = 0;i<n;i++)
	     cin>>a[i];//???????;
    cin>>k;
    for (i = 0;i<n;i++)
    {
    	if (a[i]==k)
    	{
    		m = i;
    	for (i = m;i<n-1;i++)//??a[n]???k??;
    		a[i] = a[i+1];
    	a[i] = 0;//???n???
    	i=m-1;//?????????????;
    	n = n-1;//?????????;
    	}
    }
    for (i = 0;i<n;i++)
    {
    	if (i<n-1)
    		cout<<a[i]<<' ';
    	else if (i == n-1)
    		cout<<a[i];
    }
	return 0;
}