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

int main(){
	int a[100],i,j,k,n=0,N=0,t;
	for(k=1;k<100;k++)
	{for(i=0;i<100;i++)
	    {cin>>a[i];
	    n++;
	    if(a[i]==0)i=100;}
	if(a[0]!=-1)
	  {for(i=1;i<=n-2;i++)
	    { for(j=0;j<=n-i-2;j++)
		  {if(a[j]>a[j+1])
		  {t=a[j];
		  a[j]=a[j+1];
		  a[j+1]=t;}
		  }}
	  for(i=n-2;i>=0;i--)
	  { for(j=i-1;j>=0;j--)
		  { if(a[i]==2*a[j])N++;}
		  }cout<<N<<endl;N=0;n=0;}

	else break;}
return 0;
}
