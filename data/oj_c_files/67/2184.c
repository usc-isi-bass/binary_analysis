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
	int i=0, j=0, m=0, n=0;
        double t=0,x=0,y=0,a=0,b=0,e=0,d=0;
        scanf("%d", &n);
        scanf("%d%d", &d,&e); 
        x=e/d;
        for(i=0;i<n-1;i++){
             scanf("%d%d", &a,&b);
             y=b/a;
             if(x-y>0.05){
                  printf("worse\n");}
             if(x-y<0.05&&y-x<0.05){
                  printf("same\n");}
             if(y-x>0.05){
                  printf("better\n");}
        }
	return 0;
}
