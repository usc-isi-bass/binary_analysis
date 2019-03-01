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
 int n[10000],m[10000],i,x,y,j,k,p,a[300];
 scanf("%d %d",&n[0],&m[0]);
 for(x=1;n[x-1]+m[x-1]>0;x++)
  scanf("%d %d",&n[x],&m[x]); 
 for(y=0;y<x-1;y++)
 {
 
 
 for(i=1;i<=n[y];i++)
  a[i]=i;
 j=1;
 for(k=n[y];k>1;k--)
 {
  p=m[y]%k;
  j=j+p-1;
  if(j>=k)
   j=j%k;
  if(j>0)
  {
   for(i=j;i<k;i++)
   a[i]=a[i+1];  
  }
  else
   j++;
 }
 printf("%d\n",a[1]);

 }
 getchar();
 getchar();
 return 0;    
}
