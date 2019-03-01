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

main()
{
      int a,b,c,n,m,A,B;
      int x[210][2];
      scanf("%d",&n);
      for(a=0;a<=n-1;a++)
      scanf("%d %d",&x[a][0],&x[a][1]);
      A=0;
      B=0;
      for(a=0;a<=n-1;a++)
      {
                         if((x[a][0]==(x[a][1]+1))||(x[a][0]==(x[a][1]-2)))
                         B++;
                         else if((x[a][0]==(x[a][1]-1))||(x[a][0]==(x[a][1]+2)))
                         A++;
                         else;
      }
      if(A>B)
      printf("A");
      else if(A<B)
      printf("B");
      else
      printf("Tie");
}
