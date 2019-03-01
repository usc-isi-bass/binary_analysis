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

int f(int x)
{
 int i,t=0;
 if(x==1)
  return 1;
 else if(x==2)
  return 0;
 else
 {  
  for(i=2;i<=sqrt(x);i++)
  {
   if(x%i==0)
   {
    t=1;
    break;          
   }
  }
  if(t==0)
   return 0;
  else
   return 1;
 }      
}
int main()
{
 int n,i,t=0;
 scanf("%d",&n);
 for(i=5;i<=n;i=i+2)
 {
  if(f(i)==0&&f(i-2)==0)
  {
   printf("%d %d\n",i-2,i);
   t++;
  } 
 }
 if(t==0)
  printf("empty");
 getchar();
 getchar();
 return 0;    
}
