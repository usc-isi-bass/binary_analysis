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
    int i,j,n;
    scanf("%d",&n);
    double*a=(double*)malloc(n*sizeof(double)); 
    double*b=(double*)malloc(n*sizeof(double)); 
    for(i=0;i<n;i++)
    {
     scanf("%lf %lf",&a[i],&b[i]);    
    }
    double max=0;
    for(i=0;i<n-1;i++)
    {
         for(j=i+1;j<n;j++)
         max=(((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]))>max)? ((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j])):max;   
    }
    printf("%.4lf",sqrt(max));
}
