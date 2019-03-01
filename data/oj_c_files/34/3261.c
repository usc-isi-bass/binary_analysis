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
  void jiaogu(int n);
  int m;
  scanf("%d",&m);
  jiaogu(m);
}

void jiaogu(int n)
{
   void shizi(int x);
   if(n==1)
   printf("End");
   if(n%2==0)
   {shizi(n); 
    jiaogu(n/2);}
   if(n%2!=0&&n!=1)
   {shizi(n);
   jiaogu(n*3+1);}
   
}
void shizi(int x)
{  int y;
   if(x%2==0)
   {y=x/2; 
   printf("%d/2=%d\n",x,y);}
  if(x%2!=0)
  {y=(x*3+1);
   printf("%d*3+1=%d\n",x,y);}
}
