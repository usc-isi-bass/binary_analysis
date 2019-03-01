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


int f(int x)
{  return x%2; }

int cmp(const void*a,const void*b)
{  return *(int*)a-*(int*)b; }

main()
{
      int i,j=0,n,x;
      int *b;
      scanf("%d",&n);
      b=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      {
           scanf("%d",&x);
           if(f(x)){ b[j]=x;j++;}
      }
      qsort(b,j,sizeof(int),cmp);
      for(i=0;i<j-1;i++) printf("%d,",b[i]);
      printf("%d",b[i]);
 
}
