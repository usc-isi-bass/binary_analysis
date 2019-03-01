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
  int s=0,i,j,h,n,u[10],t,v[10];
  scanf("%d",&n);
  for(i=0;i<=6;i++)
{
	  h=1;
 for(j=1;j<=i;j++)
	 h*=10;
 if(n/h==0)
  break;
}
  
  for(j=i-1;j>=0;j--)
  {
    u[i]=n;
    v[i]=0;
    u[j]=u[j+1]-v[j+1]*pow(10,j+1);
    v[j]=u[j]/pow(10,j);
   
  }
  for(j=0;j<=i-1;j++)
{
s+=v[j]*pow(10,i-1-j);
}
printf("%d",s);

 
  
  return 0;
}



