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

void main()
{
      int a[1000000];
      int i,n,del,j;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
       scanf("%d",&a[i]);
       }
       scanf("%d",&del);
       for(i=1;i<=n;i++)
      {
                           if(a[i]==del) 
                           {
                             for(j=i;j<=n;j++)   
                             a[j]=a[j+1];
                             i--;
                             n--;}
       }
      for(i=1;i<n;i++)
      printf("%d ",a[i]);
      printf("%d",a[n]);
}
