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
 int c[100][100];
 int t;
 int n=0;
 int m;
 int d[100]={0};
 int q[100]={0};
 int i;
 int z=0;
 int x=0;
 
 t=0;
 do
 {
  i=0;
  do
  {
   scanf("%d",&c[t][i]);
   if(c[t][0]==-1)
   {break;}
   if(c[t][i]==0)
   {break;}
   i++;d[t]++;
  }while(i<=100);
  if(c[t][0]==-1)
  {break;}
  t++;n++;
 }while(t<=100);
    do
 {
  i=0;
  do
  {
   m=0;
   do
   {
    if((c[z][i]*2)==c[z][m])
    {q[z]++;}
    m++;
   }while(m<=d[z]-1);
   i++;
  }while(i<=d[z]-1);
  z++;
 }while(z<=n-1);
 while(x<=n-1)
 {
  printf("%d\n",q[x]);
  x++;
 }
 scanf("%d",&t);
 return 0;
}

