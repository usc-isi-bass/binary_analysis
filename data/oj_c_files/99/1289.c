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
    int n,m;
    int i;
    int a=0,b=0,c=0,d=0;
    double e,f,g,h;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&m);
        if(m<=18){
            a++;
        }
        else if(m>18&&m<=35){
            b++;
        }
        else if(m>35&&m<=60){
            c++;
        }
        else{
            d++;
        }
    }
    e=a*1.0*100/n;
    f=b*1.0*100/n;
    g=c*1.0*100/n;
    h=d*1.0*100/n;
    printf("1-18: ");
    printf("%.2lf%%\n",e);
    printf("19-35: ");
    printf("%.2lf%%\n",f);
    printf("36-60: ");
    printf("%.2lf%%\n",g);
    printf("Over60: ");
    printf("%.2lf%%\n",h);
    return 0;
}
    
    
    

