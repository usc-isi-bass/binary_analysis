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
    int n,f;
    scanf("%d",&n);
    int a=0,b=0,c=0,d=0;           
    for(int i=0;i<n;i++){
        scanf("%d",&f);
        if(f<=18)a++;
        else if(f>=19&&f<=35)b++;
        else if(f>=36&&f<=60)c++;
        else   d++;}                          
   double A,B,C,D;                               
   A=100.00*a/n;B=100.00*b/n;C=100.00*c/n;D=100.00*d/n;
   printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%\n",A,B,C,D); 
   return 0;
}                              
        