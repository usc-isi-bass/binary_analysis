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
    int n,i,x,z,t;
    cin>>n;
    int y[n],m1[n],m2[n];
    for(i=0;i<n;i++){
        scanf("%d%d%d",&y[i],&m1[i],&m2[i]);
        }  
    for(i=0;i<n;i++){
        x=y[i]%4;
        z=y[i]%400;
        t=y[i]%100;
        
        if(x!=0||(t==0&&z!=0)){if((m1[i]==2&&m2[i]==3)||(m1[i]==3&&m2[i]==2)||(m1[i]==4&&m2[i]==7)||(m1[i]==7&&m2[i]==4)||(m1[i]==9&&m2[i]==12)||(m1[i]==12&&m2[i]==9)||(m1[i]==1&&m2[i]==10)||(m1[i]==10&&m2[i]==1)||(m1[i]==3&&m2[i]==11)||(m1[i]==11&&m2[i]==3)||(m1[i]==2&&m2[i]==11)||(m1[i]==11&&m2[i]==2))   
     { printf("YES\n");}
    else {printf("NO\n");}}
    
        else{
    if((m1[i]==1&&m2[i]==4)||(m1[i]==4&&m2[i]==1)||(m1[i]==4&&m2[i]==7)||(m1[i]==7&&m2[i]==4)||(m1[i]==9&&m2[i]==12)||(m1[i]==12&&m2[i]==9)||(m1[i]==1&&m2[i]==7)||(m1[i]==7&&m2[i]==1)||(m1[i]==2&&m2[i]==8)||(m1[i]==8&&m2[i]==2)||(m1[i]==3&&m2[i]==11)||(m1[i]==11&&m2[i]==3))
    {printf("YES\n");}
    else {printf("NO\n");}}
    
    
    }
    return 0;
    }        
