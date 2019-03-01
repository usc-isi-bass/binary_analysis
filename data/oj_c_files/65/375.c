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
   int n,A,B,Aw=0,Bw=0;
   scanf("%d",&n);
   while(n--)
   {
     scanf("%d%d",&A,&B);
     if(A==0)
      {
       if(B==1)
       Aw++;
       else if(B==2)
       Bw++;
       }
     else if(A==1)
       {
       if(B==2)
       Aw++;
       else if(B==0)
       Bw++;
       }
     else
      {
       if(B==0)
       Aw++;
       else if(B==1)
       Bw++;
      }
   }
  if(Aw>Bw)
    printf("A");
  else if(Aw<Bw)
    printf("B");
  else
    printf("Tie");
}
