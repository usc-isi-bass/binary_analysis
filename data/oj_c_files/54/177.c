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

void main()
{
  int n,k,i,y,v,t,s,q;
  scanf("%d %d",&n,&k);
  for(i=1;;i++)
   {t=i*n+k;
     for(v=1,y=1;v<=n-1;)
    { q=t*n%(n-1);
      if(q!=0) 
       {y=0;break;}
      else{v=v+1;
           s=t*n/(n-1);
           t=s+k;}
     }
       if(y==1) {printf("%d",t);break;}
    }
}
