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

int sum=0,k=2;
int fenjie(int n,int k)
{ 
  int x,i,sum=0,p=0;
  x=(int)pow(n,0.5);
  for(i=k;i<=x;i++)
   {
     if(n%i==0) {k=i;sum=sum+fenjie(n/i,k);p=1;}
   } 
   if(p==0) return 1;
   if(p==1) return sum+1;
  }
 int main()
 {   int m,n,i;
     cin>>m;
     for(i=0;i<=m-1;i++)
      {
        cin>>n;
       cout<<fenjie(n,2)<<endl;
        sum=0;
      }
  
  return 0;
}
  