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
    int i,k=1,j,m,n,a[100];
    char str[1000],b[100];
    scanf("%s",str);
    for(n=1;n<=strlen(str);n++)
    {a[n]=0;}
    
    for(m=0;m<=strlen(str)-1;m++)
  {
    if(str[m]>=97&&str[m]<=122)
    str[m]=str[m]-32;
    
  }
  if(strlen(str)==1)
   {b[1]=str[0];a[1]=1;}
   else{
    for(i=1;i<=strlen(str)-1;i++) 
    { 
      if(str[i]==str[i-1])
      {a[k]=a[k]+1;b[k]=str[i-1];}
      else
      {a[k]=a[k]+1;b[k]=str[i-1];k++;}
      if(i==strlen(str)-1)
      {a[k]=a[k]+1;b[k]=str[i];}
    }}
    for(j=1;j<=k;j++)
    {
                 
    printf("(%c,%d)",b[j],a[j]);
    }
    
} 
