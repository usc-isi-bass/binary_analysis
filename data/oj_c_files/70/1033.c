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

double dis(float a,float b,float c,float d)
{
       return (double)sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
main()
{
      int n,i,j;
      float a[1000],b[1000],max=0.0;
      scanf("%d",&n);
      for(i=0;i<n;i++)
      scanf("%f %f",&a[i],&b[i]);
      for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        max=dis(a[i],b[i],a[j],b[j])>max?dis(a[i],b[i],a[j],b[j]):max;
      printf("%.4f\n" ,max);
      getchar();getchar();} 
