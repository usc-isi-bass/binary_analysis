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


int feibo(int m)
{
    if (m==1||m==2)
       return 1;
    else 
       return feibo(m-1)+feibo(m-2);
}
    
int main(int argc, char *argv[])
{
  int n,i,place;
  scanf("%d",&n);
  for (i=0;i<=n-1;i++)
  {
      scanf("%d",&place);
      printf("%d\n",feibo(place));
  }	
  return 0;
}
