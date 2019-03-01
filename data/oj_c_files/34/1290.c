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
  int n;//?????
  int temp;//??????
  cin>>n; 
  while (n!=1)
    {
      if (n % 2==0) 
        {
          temp=n / 2;
          cout<<n<<"/"<<"2"<<"="<<temp<<endl;    
        }  
      if (n % 2!=0)
        {
          temp=n*3+1;
          cout<<n<<"*"<<"3"<<"+"<<"1"<<"="<<temp<<endl;    
        } 
      n=temp; 
    } 
  if (n=1) cout<<"End"; 
  
  return 0; 
} 