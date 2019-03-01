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
 int * array;
 int n,i,buffer;
 scanf("%d",&n);
 array=(int *)malloc(sizeof(int) * n);
 for (i=0;i<n;i++)
 {
  scanf("%d",(array+i));
 }
 for (i=0;i<=(n-1)/2;i++)
 {
  buffer=* (array+i);
  * (array+i)=* (array+(n-i-1));
  * (array+(n-i-1))=buffer;
 }
 int first;
 first=1;
 for (i=0;i<n;i++)
 {
  if (first)
  {
   printf("%d",* (array+i));
   first=0;
  }
  else 
  {
   printf(" %d",* (array+i));
  }
 }
 free(array);
 return 0;
}

 
