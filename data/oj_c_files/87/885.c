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

int jm(int f,int m){
    return f*60+m;
}
int xg(int h1,int f1,int m1,int h2,int f2,int m2){
    int rel,a,b,c;
    h2+=12;
    a=3600-jm(f1,m1);
    c=jm(f2,m2);
    b=3600*(h2-h1-1);
    rel=a+b+c;
    return rel;
}
int main(){
int h1,f1,m1,h2,f2,m2;
while(scanf("%d%d%d%d%d%d",&h1,&f1,&m1,&h2,&f2,&m2)&&h1!=0){
printf("%d\n",xg(h1,f1,m1,h2,f2,m2));}

return 0;
}

