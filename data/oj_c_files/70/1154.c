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

main()
{
 int n,i,j;
 double *px,*py,f=0,d;
 scanf("%d",&n);
 px=(double *)malloc(n*sizeof(double));
 py=(double *)malloc(n*sizeof(double));
 for(i=0;i<n;i++)
   scanf("%lf %lf",&px[i],&py[i]);
 for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
      {
       d=sqrt((px[j]-px[i])*(px[j]-px[i])+(py[j]-py[i])*(py[j]-py[i]));
       if(f<d)
         f=d;
      }
 printf("%.4lf",f);
 free(px);
 free(py);
} 