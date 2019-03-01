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

int a[25]={0},n;
int main ()
{ int F (int x);
  int i,z=0;
  scanf("%d",&n);
  for (i=0;i<n;i++)
  scanf("%d",&a[i]);
  for (i=0;i<n;i++)
  if (z<F(i))   z=F(i);
  printf("%d\n",z);  
  
}
int F (int x)
{ 
    int i,z=1;
    for (i=x+1;i<n;i++)
    if ((a[x]>=a[i])&&(F(i)+1>z))      
    z=F(i)+1;
    return z;}
