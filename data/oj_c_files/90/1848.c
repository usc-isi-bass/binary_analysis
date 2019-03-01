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

int Method(int M,int N)
{
  int i=0,result=0;
  if(M<0)//???? 
  {
    return 0;		
  } 
  if(N==0)
  {
    return 0;		
  }  
  else if(M==0)
  {
    result+=1;		
  }
  else if(M==1||N==1)
  {
    result+=1;		
  }	
  else
  {
    result+=Method(M,N-1)+Method(M-N,N);		
  }
  return result;
}
int main()
{
  int i=0,j=0,n=0,m=0,a=0;
  scanf("%d",&j);
  for(i=0;i<j;i++)
  {
    scanf("%d%d",&m,&n);
    a=Method(m,n);
    printf("%d\n",a);
  }
  return 0;
}
