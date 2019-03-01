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

int n,a,b,ind[MAXN],oud[MAXN],i;
int main()
{
  scanf("%d",&n); 
  scanf("%d%d",&a,&b);
  while(a+b)
    {
    ind[b]++;
    oud[a]++;  
    scanf("%d%d",&a,&b);     
    } 
  for(i=0;i<n;i++)
    if (ind[i]==n-1&&!oud[i])
      break;
  if (i<n)
    printf("%d\n",i);
  else
    printf("NOT FOUND\n");        
  return 0;
} 
