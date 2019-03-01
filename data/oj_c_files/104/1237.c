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

int n,m,i,x,y;
 int function(int n,int m)
 {
	 x=0,y=0;
	 if(n==1||m==1)
		 return 1;
	 if(n==m)
		 return n;
	 else
		{
			if(n%2==0&&m==n+1)
			 return n/2;
			if(m%2==0&&n==m+1)
			 return m/2;
			for(i=m;i>=2;i=i/2)
			{
				y=y+1;
			}
			for(i=n;i>=2;i=i/2)
			{
				x=x+1;
			}
			if(x==y)
				return function(n/2,m/2);
			if(x>y)
				 return function(n/2,m);
			if(x<y)
				return function(n,m/2);
	 }
 }
 int main()
 {
	 cin>>n>>m;
	 cout<<function(n,m)<<endl;
 }

	 

