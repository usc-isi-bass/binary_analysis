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
    int n,a,b,result=0,i=1,max=0;
    scanf("%d",&n);
    while(i<=n){
    scanf("%d%d",&a,&b);
    if(a>=90&&a<=140&&b>=60&&b<=90){
    result+=1;
    i++;
    }else{
    if(result>max){
    max=result;
    result=0;
    i++;}
    else{
    result=0;
    i++;}
    }
    }
    if(result>max){
       max=result;}
    printf("%d",max);
    return 0;
}
    
    

    