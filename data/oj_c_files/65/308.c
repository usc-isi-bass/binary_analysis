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
   int n,a,b,p=0,q=0;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
           scanf("%d%d",&a,&b);
           if(a-b==1) p++;
           if(a-b==-2) p++;
           if(a-b==-1) q++;
           if(a-b==2) q++;
   }
   if(q>p) printf("A");
   if(q<p) printf("B");
   if(p==q) printf("Tie");   
        return 0;
}