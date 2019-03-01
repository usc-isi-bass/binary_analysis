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

int s(int m,int n)
{   int a=0;
   if(n!=1)
   {
	for(int i=0;m-i*n>=0;++i)
	{
		a+=s(m-i*n,n-1);
	}
   }
   else
   {
	   return 1;
   }
   return a;
}
int main()
{  
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;++i)
	{   
		cin>>m>>n;
		cout<<s(m,n)<<endl;
	}
	return 0;
}

