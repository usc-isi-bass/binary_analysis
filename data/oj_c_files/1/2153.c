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

void f(int i,int m);
int sum;
int main()
{
      int n,i,m,k;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {               sum=1;
                      scanf("%d",&m);
                      f(2,m);
                      printf("%d\n",sum);
                      
      }
}
      void f(int i ,int m)
      {
           int k,s;
           s=(int)sqrt(m);
           for(k=i;k<=s;k++)
           {
                            if(m%k==0)
                            {
                                      sum++;
                                      f(k,m/k);
                            }
                            
           }
           
        }