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
	int n,m,i,t,a[100],b[100];
	   cin>>n;
	   cin.get();
	  for(i=0;i<n;i++)
	   cin>>a[i];
    for(i=0;i<n/2;i++)
	{	t=a[i];
	   a[i]=a[n-i-1];
	   a[n-i-1]=t;}
	for(i=0;i<n-1;i++)
		cout<<a[i]<<" ";
	    cout<<a[n-1];
	 return 0;
}
