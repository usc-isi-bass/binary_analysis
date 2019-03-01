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

void main()
{
 int n,i,j,k,m=0,b[50000];
 int flag[50000] = {0};
 scanf("%d",&n);
 for(i=3;i<n;i++)
 {
  if(i%2!=0)
  {
   k=1;
   for(j=2;j<= sqrt(i);j++) 
   {
    if(i%j==0)
     k=0;
   }
   if(k==1)
   {
    b[m]=i;
    flag[i] = 1;
    m++;
   }
  }
 }
 for(k=6;k<=n;k+=2)
 {
  for (i = 0; i <= m; i++) 
   if (flag[k - b[i]] == 1) 
   {
    printf("%d=%d+%d\n",k,b[i],k - b[i]);
    break;
   }
 }
}
