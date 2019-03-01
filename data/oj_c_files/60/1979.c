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

int is(int a)
{
    int sq=(int)sqrt(a);
    int i;
    for(i=2;i<=sq;i++)
    {
            if(a%i==0)
                 return 0;
    }
    return 1;
}

main()
{
      int n,m=0;
      scanf("%d",&n);
      for(int k=3;k<n-1;k++)
      {
              if(is(k)==1&&is(k+2)==1){
                  printf("%d %d\n",k,k+2);
                  m++;
              }
      }
      if(m==0){
               printf("empty");
      }}