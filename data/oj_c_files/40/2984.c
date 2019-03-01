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
      float s,a,b,c,d,e,f,g;
      scanf("%f",&a);
      scanf("%f",&b);
      scanf("%f",&c);
      scanf("%f",&d);
      scanf("%f",&e);
      s=(a+b+c+d)/2;
      f=(e/180)*PI;
      g=(s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f/2)*cos(f/2); 
      if(g<0)
      {printf("Invalid input");}
      else
      {
          s=sqrt((s-a)*(s-b)*(s-c)*(s-d) - a*b*c*d*cos(f/2)*cos(f/2));
          printf("%.4f",s);}
          getchar();
          getchar();
          getchar();
}
      
      
      
      
