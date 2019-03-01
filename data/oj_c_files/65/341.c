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
      int n,i=1,A=0,B=0;
      scanf("%d",&n);
      while(i<=n){
                  int a,b;
                  scanf("%d %d",&a,&b);
                  if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0))
                     B=B+1;
                  else if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0))
                     A=A+1;
                  i=i+1;
                  }
      if(A>B)
         printf("A");
      else if(B>A)
         printf("B");
      else if(A==B)
         printf("Tie");
}
