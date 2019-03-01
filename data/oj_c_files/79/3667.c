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


void Left(int *ptr,int hd,int tl);

int main()
{
    int n,m,m1;
    int a[301],result[100];
    int i,j=0,k;
    while(1)
    {
       scanf("%d%d",&n,&m);
       if(n==0&&m==0) break;

       for(i=1;i<=n;i++) a[i]=i;

       k=1;
       for(i=n;i>1;i--)
       {
          if(m%n!=0) m1=m%n;
          else m1=n;
          if(k-1+m1<=n) k+=m1-1;
          else k=k-1+m1-n;
          Left(a,k,n);
          n--;
       }
       j++;
       result[j]=a[1];
    }
    
    for(i=1;i<=j;i++) printf("%d\n",result[i]);
    
  return 0;
}

void Left(int *ptr,int hd,int tl)
{
   int i;
   for(i=hd;i<tl;i++)
   {
      ptr[i]=ptr[i+1];
   }
   ptr[tl]=0;
}
    
    