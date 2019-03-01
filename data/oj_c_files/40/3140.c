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
{double a,b,c,d,e,sum,k;

scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);


e/=360;

e*=3.1415926;sum=(a+b+c+d)/2;
sum=((sum-a)*(sum-b)*(sum-c)*(sum-d)-a*b*c*d*cos(e)*cos(e));
if(sum<0)printf("Invalid input");
else{sum=(a+b+c+d)/2;
sum=((sum-a)*(sum-b)*(sum-c)*(sum-d)-a*b*c*d*cos(e)*cos(e));
sum=sqrt(sum);
printf("%.4f\n",sum);}return 0;
}