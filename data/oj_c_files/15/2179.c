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
int x,y,z,w;
int n,i,j,t,s,tz=0;
scanf("%d",&n);
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
     {scanf("%d",&t);
             if(t==0&&tz==0) {tz++;x=i;y=j;}
         if (t==0){z=i;w=j;}
     }  
                           printf("%d",(z-x-1)*(w-y-1));                       
}