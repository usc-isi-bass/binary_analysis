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

int f(int x,int y){
    int r=1;
    if(y==1||x==0||x==1)
      return 1;
    if(y==0)
      return 0;
    if(y>x)
      y=x;
    r=f(x-y,y)+f(x,y-1);
    return r;        
}
int main(){
    int t,m[20],n[20];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
            scanf("%d %d",&m[i],&n[i]);
            }
    for(int i=0;i<t;i++){
            printf("%d\n",f(m[i],n[i]));
            }
    return 0;
}