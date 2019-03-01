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
    double a[200],b[200],d[200][200],k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    scanf("%lf%lf",&a[i],&b[i]);
    }
    for(i=0;i<n-1;i++)
    {
                    for(j=i+1;j<n;j++)
                    {
                                      d[i][j]=sqrt((a[i]-a[j])*(a[i]-a[j])+(b[i]-b[j])*(b[i]-b[j]));
                                      if(k<d[i][j])
                                         k=d[i][j];
                    }
    }
    printf("%.4f\n",k);
    return 0;
}