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
  double a,b,c,d,A,S;
  scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&A);
    if((b+c+d-a)*(a+c+d-b)*(a+b+d-c)*(a+b+c-d)/16-a*b*c*d*cos(A*3.1415926/360)*cos(A*3.1415926/360)<0){
       printf("Invalid input");
        }
  else{
         S=sqrt((b+c+d-a)*(a+c+d-b)*(a+b+d-c)*(a+b+c-d)/16-a*b*c*d*cos(A*3.1415926/360)*cos(A*3.1415926/360)); 
        printf("%.4lf\n",S);
        }
  return 0;
} 

