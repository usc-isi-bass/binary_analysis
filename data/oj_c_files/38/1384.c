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


int main(){
    int n;
    scanf("%d",&n);
    int i;
    double sz[n];
    for(i=0;i<n;i++){
                     int n1;
                     scanf("%d",&n1);
                     int j;
                     double sz1[n1];
                     double num=0;
                     for(j=0;j<n1;j++){
                                       scanf("%lf",&(sz1[j]));
                                       num+=sz1[j]/n1;
                                       }
                     double s=0;                  
                     for(j=0;j<n1;j++){
                                       s+=(sz1[j]-num)*(sz1[j]-num)/n1;
                                       }
                     double s1=sqrt(s);
                     sz[i]=s1;
                     }
     for(i=0;i<n;i++){
                      printf("%.5lf\n",sz[i]);
                      }
                      
                      return 0;
                      }