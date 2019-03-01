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

int k,n,t=1;
void mokey(int x)
{
	if(x%(n-1)==0)
	{
	     x=x*n/(n-1);
		 x=x+k;
		 t++;
		 if(t==n)  { cout<<x;  exit(0); } 
		 else   mokey(x);
	}
}
int main ()
{
	int i=0,x;
	cin>>n>>k;
	for(i=1;;i++)
    {	
		t=1;
	   x=n*i+k;
	   mokey(x);
	}
		return 0;
}

 
 
 
