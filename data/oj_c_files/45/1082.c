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
 char a[50],b[50];
 int i,j,k,m=0,p=0,d=1;
 int n[50];
 scanf("%s%s",a,b);
  for(j=0;b[j]!='\0';j++)
  {
    if(a[0]==b[j])
    { 
      m++;}
  }
  n[0]=0;
  for(i=1;i<m+1;i++)
 { 
   for(j=n[i-1];b[j]!='\0';j++)
  {
    if(a[0]==b[j]&&d==1)
    { 
       n[i]=j;
      d=0;
       }
  }
 }
 for(k=1;k<m+1;k++)
{ 
  for(i=0;a[i]!='\0';i++)
  { if(a[i]==b[n[k]+i])
    { p++;}
   }
  if(p==strlen(a))
  {printf("%d",n[k]);}
}
 return 0;
}
     
     