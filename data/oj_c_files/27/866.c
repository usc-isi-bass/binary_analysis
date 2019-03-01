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
      int n,i;
      scanf("%d",&n);
      double a,b,c,x,num1,num2,k1,k2;
      for(i=1;i<=n;i++)
      {
        scanf("%lf %lf %lf",&a,&b,&c);
        x=b*b-4*a*c;
        if(x>=0)
        { 
                if(x==0)
               {
                num1=num2=(-b + sqrt(b*b-4*a*c))/(2*a);
                printf("x1=x2=%.5f\n",num1);
                }
                else 
               {
                num1= (-b + sqrt(b*b-4*a*c))/(2*a);
                num2= (-b - sqrt(b*b-4*a*c))/(2*a);
                printf("x1=%.5f;x2=%.5f\n",num1,num2);
               }
        }
        else 
        if(b!=0)
        {
                k1=-b/(2*a),k2=(sqrt(-b*b+4*a*c))/(2*a);
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",k1,k2,k1,k2);
                
                }
         else
         {
                k1=b/(2*a),k2=(sqrt(-b*b+4*a*c))/(2*a);
                printf("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n",k1,k2,k1,k2);
                
                }
                       
      }
}      
      