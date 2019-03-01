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
 double a[10000][2],b[10000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%lf %lf",&a[i][0],&a[i][1]);
 for(i=0;i<n;i++)
  b[i]=a[i][1]/a[i][0];
 for(i=1;i<n;i++)
  {
   if((b[i]-b[0])>0.05)
    printf("better\n");
   else if((b[i]-b[0])<-0.05)
    printf("worse\n");
   else               
    printf("same\n");
  }
  getchar();  
  getchar(); 
  return 0;
}
