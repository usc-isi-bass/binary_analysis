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
    double a,b,c,d,w,s,S;
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&w);
    s=(a+b+c+d)/2.0;
    w=cos(w/2.0*3.1415926/180.0);
    
    if((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*w*w>0){
      S=sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*w*w);
      printf("%.4f\n",S);
    }
 else{ 
      printf("Invalid input\n");
    }
 return 0;
} 

