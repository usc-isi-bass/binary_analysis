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

int apple(int M,int N)
{
    if(M==1)
    return 1;
    if(N==1)
    return 1;
    if(M!=1&&N!=1)
    {
        if(M>N)
        return apple(M,N-1)+apple(M-N,N);
        else if(M==N)
        return apple(M,N-1)+1;
        else
        return apple(M,M);
    }
}
main()
{
      int t,i;
      scanf("%d",&t);
      int *M,*N;
      M=(int*)malloc(t*sizeof(int));
      N=(int*)malloc(t*sizeof(int));
      for(i=0;i<t;i++)
      {
         scanf("%d %d",&M[i],&N[i]);
         printf("%d\n",apple(M[i],N[i]));
      }
      free(M);
      free(N);
     }   
