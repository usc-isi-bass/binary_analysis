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
	double a,b,c,d,e,e1,s,s1,s2;
         scanf("%lf",&a);
         scanf("%lf",&b);
         scanf("%lf",&c);
         scanf("%lf",&d);
         scanf("%lf",&e);
        e1=3.1415926*e/180;
        s = (a+b+c+d)/2;
        s2 = (s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e1)/2)*cos((e1)/2); 
 
if(s2<=0){
printf("Invalid input");

}
else{
s1 = sqrt ((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos((e1)/2)*cos((e1)/2)); 
printf("%.4f", s1); 
	}
return 0;
}