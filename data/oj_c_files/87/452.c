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


int main()
{
    int a,b,c,d,e,f,x,y,z,m;
    while(1)
   {

   scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
   if((a==0)&&(b==0)&&(c==0)&&(d==0)&&(e==0)&&(f==0))
   break;
   d=d+12;
   if(f<c)
   {
        f=f+60;
        e=e-1;
   }
   z=f-c;
   if(e<b)
   {
       e=e+60;
       d=d-1;
   }
   y=e-b;
   x=d-a;
   m=x*3600+y*60+z;
   printf("%d\n",m);

}
return 0;
}
