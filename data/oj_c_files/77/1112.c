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
 char a[1000];
 gets(a);
 int n;
 n=strlen(a);
 int b[n];
 int i=0,j=0,c=0,k=0;
 while(i<n)
 {
  b[i]=1;
  i++;
 }
 i=0;
 while(k<n/2)
 {
  c=0;
  if(b[i]==0)
   i++;
  else
  {
   j=i+1;
   while(c==0)
   {
    if(b[j]==0)
     j++;
    else
    {
     if(a[j]==a[i])
      i++,c=1;
     else
     {
      printf("%d %d\n",i,j);
      k++;
      b[i]=0;
      i=0;
      b[j]=0;
      c=1;
     }
    }
   }
  }
 }
}
