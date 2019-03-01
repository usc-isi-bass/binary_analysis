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
 char a[500];
 gets(a);
 int i,j,n,k,t,m;
 n=strlen(a);
 for(i=1;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   t=j+i;m=0;
   if(t>n-1) break;
   t=(t+j)/2;
   for(k=j;k<=t;k++)
   {
    if(a[k]!=a[2*j+i-k]) {m=1;break;}
   }
   if(m==0)
   {for(k=j;k<=j+i;k++)
   {
    printf("%c",a[k]);
   }
   printf("\n");
  }}
 }
}

