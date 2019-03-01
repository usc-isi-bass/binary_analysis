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
int n,i,j,sum;
int sz[10000],b[30];
scanf("%d",&n);
 for(i=0;i<n;i++)
 scanf("%d",&sz[i]);
 for(i=0;i<n;i++)
  { 
    if(sz[i]==1||sz[i]==2){
      sum=1;
      }else {
      for(j=3;j<=sz[i];j++)
       {
      b[1]=1;
      b[2]=1;
      b[j]=b[j-2]+b[j-1];
      sum=b[j]; 
       }
     }
   printf("%d\n",sum);
   }
   return 0;
}   
