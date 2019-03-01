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
    int n,i,j,a;
   
	int f2;
    float b;
  
    scanf("%d",&n);
    for(i=0;i<n;i++){
       scanf("%d",&a);  
	   float sum=0.000;
       int f0=1;
       int f1=1;
       for(j=0;j<a;j++){
          f2=f1+f0;
          f0=f1;
          f1=f2;
          b=(float)f1/f0;
          sum+=b;
       }
	   printf("%.3f\n",sum);
    }
    return 0;
}