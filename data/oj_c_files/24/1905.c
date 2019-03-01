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
 char a[1000];
 int len;
 gets(a);
  len=strlen(a);
 int i,j,m=0,x=0,num[200],b[200];
 for(i=0;i<=len;i++){
  m++;
  if(a[i]==' '||a[i]=='\0'||a[i]==','){
   num[x]=m-1;
   b[x]=i;
   x++;
   m=0;
  }
 }

 int e,n=0,y=0;
 for(i=0;i<x;i++)
 {
  if(num[i]>num[n])
  {
   n=i;
  }
  if(num[i]<num[y] && num[i]!=0)
  {
   y=i;
  }
 }

 for(i=b[n]-num[n];i<b[n];i++){
  if(i!=b[n]-1)
  {
   printf("%c",a[i]);
  }
  if(i==b[n]-1)
  {
   printf("%c\n",a[i]);
  }
 }


 for(i=b[y]-num[y];i<b[y];i++)
  {
   if(i!=b[y]-1)
 {
    printf("%c",a[i]);
   }
   if(i==b[y]-1)
   {
    printf("%c\n",a[i]);
   }
  }
 return 0;
}


