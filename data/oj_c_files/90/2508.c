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

int num(int M,int N)
{
    if(M>N&&N!=1)
       return num(M-N,N)+num(M,N-1);
    else if(M==N)
       return num(M,N-1)+1;
    else if(M<=N&&M!=1)
       return num(M,M);
    else if(M==1||N==1)
       return 1;
}
main()
{
      int t,i=0;
      scanf("%d",&t);
      while(i<t){
                 int M,N;
                 scanf("%d %d",&M,&N);
                 int situation;
                 situation=num(M,N);
                 printf("%d\n",situation);
                 i=i+1;
                 }                  
}
