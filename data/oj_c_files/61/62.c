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
 int n,i,j;
 int a[10000],b[10000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%d",&b[i]);
 a[0]=1;
 a[1]=1;
 for(i=0;i<n;i++)
 {
  for(j=2;j<=b[i]-1;j++)
  a[j]=a[j-1]+a[j-2];
  printf("%d\n",a[b[i]-1]);                
 }
 getchar();
 getchar();
 return 0;  
}

 
