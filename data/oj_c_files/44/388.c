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


int reverse(int n){
    int x,i,zz;
    zz=n%10;
    for(i=0;n/10!=0;i++){
    n=n/10;
    x=n%10;
    zz=zz*10+x;}
    return zz;
}   
int main(){
    int i,m;
    for(i=0;i<6;i++){
                     scanf("%d",&m);
                     printf("%d\n",reverse(m));
    }                 
    
    return 0;
}
