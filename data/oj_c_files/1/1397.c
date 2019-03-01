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

int f(int s,int num) //s?????num????? 
{    
     if(s==num) return 1; 
     if(s<num)
      for(int i=s;i<=num;i++)
      {
        if(num%i==0)
        {
          if(i<num)   return f(i,num/i)+f(i+1,num);
          if(i==num)  return 1;
        }
      }
     if(s>num)  return 0;  
}
int main()
{
    int n,i,num;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>num;
        cout<<f(2,num)<<endl;
    }            
    return 0;
}