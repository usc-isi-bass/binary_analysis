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

int main ()
{
int n=0,i=0,x=1,m=1,t=1,s=0;
cin>>n;
int a[10];
for(i=0;i<n;i+=1)
{
	cin>>a[i];}
for(i=0;i<n;i+=1)
{
 for(x=2;x<a[i];x+=1)
    	  {s=m+t;
    	  m=t;
    	  t=s;}

      cout<<t<<endl;
      m=1,t=1,s=0;
}
return 0;
}
