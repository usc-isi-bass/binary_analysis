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
    double s[5],p,di=1;
    int i,k;
    for(i=0;i<5;i++){
        scanf("%lf",&s[i]);}
    p=(s[1]+s[2]+s[3]+s[0])/2;
    for(k=0;k<4;k++){
        di*=(p-s[k]);}
    if(di<0){
        printf("Invalid input");}
    else
    {
        double ss,hudu;
        hudu=((s[4]/2)/180)*PI;
        ss=pow((di-s[1]*s[2]*s[3]*s[0]*pow(cos(hudu),2)),0.5);
        printf("%.4lf\n",ss);
    }
    return 0;
}