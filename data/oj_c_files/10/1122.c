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

int H[1000],D[1000];

int main()
{
 int i,j,k,n,temp;
 for(i=0;i<21;i++) D[i]=0;
 i=0;
 while(scanf("%d",&H[i])!=EOF)     i++;
 D[i-1]=1;
 for(j=i-2;j>=0;j--)
 {
   k=j+1;
   n=0;
   while(k<i)
   {
     if(H[j]>=H[k]&&D[k]>n) n=D[k];
     k++;
   }
  D[j]=n+1;
 }
 n=0;
 for(j=0;j<i;j++)
 {
  if(D[j]>n) n=D[j];
 }
 printf("%d",n);
 
}