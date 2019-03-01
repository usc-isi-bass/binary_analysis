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
{int m,n,a,b,c,d=0,i,j,e;
 scanf("%d %d",&m,&n);
 for(i=m;i<=n;i++)
 {for(j=2;j<i;j++)
   {if(i%j==0) break;}
  if(j==i)
  {a=i;c=0;
   while(a!=0)
    {b=a%10;a=a/10;c=10*c+b;}
   if(c==i) d++;
   }

  }
  if(d==0) printf("no\n");
  else 
{  e=1;
  for(i=m;i<=n;i++)
 {for(j=2;j<i;j++)
   {if(i%j==0) break;}
  if(j==i)
  {a=i;c=0;
   while(a!=0)
    {b=a%10;a=a/10;c=10*c+b;} 
    
   if(c==i&&e<d) {printf("%d,",i);e++;}
   else if(c==i&&e==d) printf("%d",i);
   }
}
}
 }  

