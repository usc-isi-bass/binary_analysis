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
 int array[300],n,i,j;
 int p,q;
 scanf("%d",&n);
 for (i=0;i<n;i++)
  scanf("%d",&array[i]);

 for (p=0;p<n-1;p++)
 {
  for (q=p+1;q<n;q++)
  {
   if (array[p]==array[q])
   {
    for (j=q;j<n-1;j++) 
    {
     array[j]=array[j+1];
    }
    n--;q--;
   }
  }
 }
 printf("%d",array[0]);
 for (i=1;i<n;i++)
 {
  printf(",%d",array[i]);
 }
 return 0;
}
 
