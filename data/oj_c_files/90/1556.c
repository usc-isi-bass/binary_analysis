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
{   int fang(int x,int y);
    int i,t,m,n,f;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&m,&n);
        printf("%d\n",fang(m,n));
        } 
}
int fang(int x,int y)
{    
    if(x==1||y==1){ 
       return 1;}       
    if(x>y){
        return fang(x,y-1)+fang(x-y,y);
       }
    if(x<y){
        return fang(x,x);}
    if(x==y){
       return fang(x,y-1)+1;}            
    
}
       
    