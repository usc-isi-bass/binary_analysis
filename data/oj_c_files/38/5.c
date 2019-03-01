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


int main(int argc, char *argv[])
{
    int k,n,i,m;
    double S,a;
    scanf("%d",&k);
    for(m=0;m<k;m++){
                     scanf("%d",&n);
                     double*x;
                     a=0;S=0;
                     x=(double*)malloc(sizeof(double)*n);
                     for(i=0;i<n;i++) {
                                      scanf("%lf",&x[i]);
                                      a+=x[i];
                                      }
                     a=a/n;
                     for(i=0;i<n;i++){
                                      S+=(x[i]-a)*(x[i]-a);
                                      }
                     S=sqrt(S/n);
                     printf("%.5lf\n",S);
                     }
                              
  return 0;
}
