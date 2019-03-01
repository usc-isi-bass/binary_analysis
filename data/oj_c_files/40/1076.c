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
    float a,b,c,d;
    float an;
    scanf("%f\n %f\n %f\n %f\n %f\n",&a,&b,&c,&d,&an);
    float s;
    s = (a+b+c+d)/2;
    float angel=an*2*3.1415926/360;
    double S;
    S=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(angel/2))*(cos(angel/2)));
    if((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*(cos(angel/2))*(cos(angel/2))<0){
             printf("Invalid input");
    }
    else{
          printf("%.4lf",S);
    }
    return 0;
}