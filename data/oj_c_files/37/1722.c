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
int t,i,j,k,l,m,n,b[100000];
char a[100000];
scanf("%d",&t);
for(i=1;i<=t;i++)
 {
 scanf("%s",a);
 l=strlen(a);
 for(j=0;j<l;j++)
  {
  b[j]=0;
  }  
 for(j=0;j<l;j++)
  {
  for(k=0;k<l;k++)
   {
   if(j==k) continue;
   if(a[j]==a[k]) b[j]++;
   }
  }
  for(j=0;j<l;j++)
  {
  if(b[j]==0) {printf("%c\n",a[j]); break;}
  else m=j;
  }
  if(m==l-1) printf("no\n");
 }

}
