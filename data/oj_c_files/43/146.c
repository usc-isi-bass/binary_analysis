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

int JudgePrime(int n);
int JudgeOdd(int n);
void f(int n);
int main()
{
   int num;
   cin>>num;
   f(num);
   return 0;
}
void f(int n)
{
   int i;
   for(i=2;i<=n/2;i++)
   {
      if(JudgePrime(i)==1 
      && JudgeOdd(i)==1 
      && JudgePrime(n-i)==1 
      && JudgeOdd(n-i)==1) 
      cout<<i<<' '<<n-i<<endl;
   }
}
int JudgePrime(int n)
{
   int k,i;
   k=sqrt(n);
   if(n==2) return 1;
   else 
   {
      for(i=2;i<=k;i++)
      {
          if(n%i==0) return 0;
      }
   }
   return 1;
}
int JudgeOdd(int n)
{
   if(n%2==1) return 1;
   else return 0;
}