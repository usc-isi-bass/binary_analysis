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


int main(int argc, char *argv[])
{
  int i,t,m,n;
  scanf("%d",&t);
  for(i=0;i<=t-1;i++)
  {
      scanf("%d %d",&m,&n);
      printf("%d",f(m,n));
      if(i!=t-1) printf("\n");
  }
  	
  return 0;
}

int f(int m,int n)
{
     int x=0;
     if(m<0) x+=0;
     else if(m==0) x+=1; 
     else if(n>1) x+=f(m,n-1)+f(m-n,n);
     else if(n==1) x+=1;
     return x;
}
