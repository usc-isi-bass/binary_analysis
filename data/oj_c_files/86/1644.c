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
//????????????
//???2013.10.19
//**********************************
int main()
{
	 int n=0,i=0,j=0,a[100],b[20],sum=0,q=0;
	 cin>>n;
	 for(i=0;i<n;i++)
	 {
		 cin>>a[i];
		 if(a[i]>0)
		{
		       for(j=1;j<=a[i];j++)
		      {
			        cin>>b[j];
				  if(b[j]+j*3<=60)
				  {  sum=60-3*j;  }
				  if(b[j]+j*3<=63&&b[j]+j*3>60)
				  {   sum=b[j];  }
			   }
		 }
		 if(a[i]==0)
		 {
			 sum=60;
		 }
		 cout<<sum<<endl;
	  }
   return 0;
}