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
    int i=1;
    double n,num;
    double a=0,b=0,c=0,d=0;
    double w,x,y,z;
    scanf("%lf",&n);
   while(i<=n){
       scanf("%lf",&num);
       if(num<=18){
        a++;i++;}
        else if(num>=19&&num<=35){b++;i++;}
        else if(num>=36&&num<=60){c++;i++;}
        else if(num>=61){d++;i++;}
   }
       w=a/n*100;x=b/n*100;y=c/n*100;z=d/n*100;
       printf("1-18: %.2lf%%\n",w);
       printf("19-35: %.2lf%%\n",x);
       printf("36-60: %.2lf%%\n",y);
       printf("Over60: %.2lf%%\n",z);
        return 0;
}
        
        
   
    
