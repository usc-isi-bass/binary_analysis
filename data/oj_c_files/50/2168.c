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
    int w;
    cin>>w;
    for(int i=1;i<=12;i++){
        if((w+12)%7==5) cout<<i<<endl;
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12) w+=31;
        if(i==2) w+=28;
        if(i==4||i==6||i==9||i==11) w+=30;       
    }
    return 0;
    } 
