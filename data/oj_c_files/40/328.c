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
float a,b,c,d,s,S,J,j;
scanf("%f\n%f\n%f\n%f\n%f",&a,&b,&c,&d,&J);
j=(float)(3.1415926*J)/360;
s=(a+b+c+d)/2;
if(((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j))>1e-6)
{S=(float)sqrt((s-a)*(s-b)*(s-c)*(s-d)-a*b*c*d*cos(j)*cos(j));
printf("%.4f",S);
}
else
printf("Invalid input");
 }