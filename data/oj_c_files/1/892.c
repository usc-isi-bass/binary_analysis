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

int Factorization(int,int);
int main()
{
    int n=0,num=0;
    cin>>n;
    for(int i=0;i<n;i++)
      {
          cin>>num;
          cout<<Factorization(num,2)+1<<endl;
      }
      return 0;
}


int Factorization(int num,int n)
{
    int count=0;
    for(int i=n;num/i>=i;i++)
       if(num%i==0)
       {
           count++;
           count=count+Factorization(num/i,i);
       }
    return count;
}
