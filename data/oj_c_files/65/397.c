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
      int n;
      scanf("%d",&n);
      int A=0,B=0,c=0;
      for(int i=0;i<n;i++)
      {
       int a,b;
       scanf("%d %d",&a,&b);
       if(a==b)
       c++;
       else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
       A++;
       else
       B++;
      }
      if(A>B)
      printf("A\n");
      else if(A<B)
      printf("B\n");
      else
      printf("Tie\n");
             
}
