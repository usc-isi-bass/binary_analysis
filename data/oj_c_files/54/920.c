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
{int n,k,c,t,A;
double s;
double num(int n,int t,int b,int a);
  
  scanf("%d %d",&n,&k);
  t=n;
  for(A=t-1;;A=A+t-1)
  {
    
     s=num(n,t,k,A);
	if(s-(int)s<0.000000001)  break;
    
	
  }

  printf("%ld\n",(int)s);
  return 0;
}



double num(int n,int t,int b,int a)
{  double S;
    int j;
       
     t=(float)t;
    if(n>1)  S=(double)num(n-1,t,b,a)*(float)t/(float)(t-1)+(float)b;
    if(n==1)  S=(double)a*(float)t/(float)(t-1)+(float)b;
  
  return S;
}