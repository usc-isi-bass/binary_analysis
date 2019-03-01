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
  int n,i,j,k,a,b;
  scanf("%d",&n);
  for(i=1;i<6;i++)
  {
                  b=pow(10,i);
                  a=(n%b)/pow(10,i-1); 
                  
                 if(a==0)
                 {break;}
                 printf("%d",a);
  }

  scanf("%d",&k); 
}

