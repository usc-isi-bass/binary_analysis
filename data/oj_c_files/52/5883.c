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
    int i,k,m,n,t,a[101];
    cin>>n>>m;
    for(i=0;i<n;i++)
    	cin>>*(a+i);
    for(k=1;k<=m;k++)
    {
    	t=*(a+n-1);
    	for(i=n-1;i>0;i--)
    		*(a+i)=*(a+i-1);
    	*a=t;
    }
    for(i=0;i<n-1;i++)
    	cout<<*(a+i)<<' ';
    cout<<*(a+i);
	return 0;
}
