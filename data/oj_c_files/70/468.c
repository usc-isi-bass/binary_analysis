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
    double a[10][2];
    int n,i,j;
    double x,y;
    double l[10][10];
	double max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%lf %lf\n",&a[i][0],&a[i][1]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            l[i][j]=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
       }
   }
   for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
           
           if(l[i][j]>=max)max=l[i][j];
        }
   }
        printf("%.4lf\n",max);
       return 0;
}  
    