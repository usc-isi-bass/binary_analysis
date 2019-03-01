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
      int n,a,b,p,q,k,i;
      int s[10010];
      scanf("%d",&n);
      p=500;
      q=0;
      for(i=0;i<n;i++)
{
      scanf("%d%d",&a,&b);
     if(p>a)
     p=a;
     if(q<b)
     q=b;
     for(int j=a;j<b;j++)
    {
      s[j]=5;
    }
}
    k=0;
    for(i=p;i<q;i++)
{
   if(s[i]!=5)
    k++;
   else  k=k;
}
  if(k==0)
 printf("%d %d\n",p,q);
 else printf("no");
 return 0;
}