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

//**********************************
//??: ???
//???2013.11.23
//**********************************
int k=0;

int count(int m,int n)
{
   if(m<0)
	   return 0;
   if(n==1||m==0)
	   return 1;
   else 
	 k=count(m-n,n)+count(m,n-1);
   return k;
}

int main()
{   
	 int m[25],n[25],sum=0,t=0,i=0;
	 cin>>t;
	 for(i=1;i<=t;i++)
	 {
		 cin>>m[i]>>n[i];
		 sum=count(m[i],n[i]);
		 cout<<sum<<endl;
	 }

	return 0;	
}