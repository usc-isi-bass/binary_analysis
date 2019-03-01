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
{int a[100][100];
int i,j;
for(i=1;i<=5;i++)
  for(j=1;j<=5;j++)
  {
  cin>>a[i][j];
  }
  int k,t,m=0;
  int c=1,b=1;
 for(i=1;i<=5;i++)
 {
  for(j=1;j<=5;j++)
  {
      
       {for(t=1;t<=5;t++)
       if(a[i][t]>a[i][j])
          c=0;
       }
      for(k=1;k<=5;k++)
	  {if(a[k][j]<a[i][j])
	      b=0;
      } 
      if((c*b)!=0)
      {
      cout<<i<<" "<<j<<" "<<a[i][j]<<endl;
      m=1;}
        c=1;b=1;
  } 
 }
 if(m==0)
 cout<<"not found";

 return 0;
}