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
{  int k,x,t,q,i,m,n,a[25000];
    double j,p;
    cin>>n;
	for (i=6;i<=n;i=i+2)
	{ p=i;
		k=sqrt(p);
        for (j=3;j<=p;j=j+2)
		{  
			t=sqrt(j) ;
		    q=j;
			for(m=3;m<=t;m=m+2)
			{ if (q%m==0)
			{ break;}
			}
			if (m>t)
			{  t=sqrt(p-j) ;
		    q=p-j;
			for(m=3;m<=t;m=m+2)
			{ if (q%m==0)
			{ break;}
			}
			if (m>t)
			{ cout<<i<<"="<<j<<"+"<<i-j<<endl; 
			break;}}}}
return 0;
}