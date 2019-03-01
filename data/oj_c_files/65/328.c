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
      int n,i;
      scanf("%d",&n);
      int m1=0,m2=0;
      for(i=0;i<n;i++)
      {
            int a,b;
            scanf("%d %d",&a,&b);
            if ((a==0&&b==0)||(a==1&&b==1)||(a==2&&b==2))  
            {m1+=1;m2+=1;}
            if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)) m1+=2;
            if((a==1&&b==0)||(a==0&&b==2)||(a==2&&b==1)) m2+=2;
      }
      if(m1==m2) printf("Tie");
      else if(m1>m2) printf("A");
      else printf("B");
}