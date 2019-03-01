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
  int n,m,i,t;
  scanf("%d%d",&n,&m);
  int *p=(int *)malloc(n*sizeof(int));
  int *q=(int *)malloc(n*sizeof(int));
  for(i=0;i<n;i++)
  {
   scanf("%d",&p[i]);
   q[i] = i+1;
  }
  q[n-1] = 0;
  q[n-m-1] = n;
  t = n-m;
  while(1)
  {
    printf("%d",p[t]);
    t = q[t];        
    if(t == n) break;
    printf(" ");
  }
 return 0;    
}

