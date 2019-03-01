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
 int n;
 scanf("%d",&n);
 int dijige[20];
 for(int i=0;i<=n-1;i++)
  {
    scanf("%d",&(dijige[i]));
  }
 int q[30];
 q[0]=1;
 q[1]=1;
 for(int k=2;k<=25;k++)
   {
     q[k]=q[k-1]+q[k-2];
   }
 for(int j=0;j<=n-1;j++)
   { 
         printf("%d\n",q[dijige[j]-1]);
  
   } 
  
 return 0;
}
