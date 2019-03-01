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

 int sushu(int n)
{
      int i,j;
      for(j=0,i=2;i<=(int)sqrt(n);i++)
         {if(n%i!=0)
            {j=j+1;}
         }
         if(j>=(int)sqrt(n)-1)
            return(1);
         else return(0);

}
main()
{ int sushu(int n);
 int a,b,n,i,j;
 scanf("%d",&n);
if(n<=4) printf("empty");
else{
 for(i=2;i<=n-1;i++)
    {if(sushu(i)==1&&sushu(i+2)==1)
       {printf("%d %d\n",i,i+2);
         a+=1;
       }
    }
  }
}
 
