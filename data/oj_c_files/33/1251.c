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
   char a[1000][255];
   int m,i,k,j;
   scanf("%d",&m);
   for(i=0;i<m;i++)
   {
       scanf("%s",a[i]);
   }
   for(j=0;j<m;j++)
   {
       for(k=0;k<255;k++)
       {
           if(a[j][k]=='A')
           printf("T");
           else if(a[j][k]=='T')
           printf("A");
           else if(a[j][k]=='C')
           printf("G");
           else if(a[j][k]=='G')
           printf("C");
       }
       printf("\n");
   }
   return 0;
}
