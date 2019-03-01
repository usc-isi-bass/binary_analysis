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

int main()  {
     int i,j,n,k,t;
    scanf("%d",&n);
    int a[n];
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  for(i=0;i<n;i++)
   { k=i;
     for(j=i+1;j<n;j++)
       if(a[k]<a[j])   
{  t=a[k];a[k]=a[j];a[j]=t;}
    }
  printf("%d\n%d",a[0],a[1]);  
        return 0;}