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
	int a1,a2,a3,i,j,p,n,t;
	cin>>n;
	for (i=0;i<n;i++)
	{
		a1=1;
		a2=1;
		cin>>p;
		if(p==1||p==2) cout<<"1"<<endl;
		else 
		{
		   for(j=2;j<p;j++)
		   {
			   a3=a1+a2;
			   t=a3;
			   a1=a2;
			   a2=t;
		   }
		   cout<<a3<<endl;
		}
	}

	return 0;
}
