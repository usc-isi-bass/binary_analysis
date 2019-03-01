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
	int k,m,n,i,a[100];                //????
	m=0;n=0;
	cin>>k;                            //????
	for(i=0;i<k;i++)                   //??k?
	{
	   cin>>a[i];
	   if(a[i]>m)                     
		   {n=m;
	        m=a[i];}
	   else if(a[i]>n)
		    n=a[i];
	}
    cout<<m<<endl;
	cout<<n<<endl;
	return 0;
}