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
int n,i,a,b,d,m;
scanf("%d",&n);
int c[n];
m=1;
c[m]=0;
for(i=0;i<n;i++){
    scanf("%d%d",&a,&b);
    if(a<=140&&a>=90&&b<=90&&b>=60){
       c[m]=c[m]+1;
    }else{
        m=m+1;
        c[m]=0;
    }
}
for(i=1;i<m;i++){
    if(c[i]>c[i+1]){
    d=c[i];
    c[i]=c[i+1];
    c[i+1]=d;
    }
}
printf("%d",c[m]);
return 0;
}
