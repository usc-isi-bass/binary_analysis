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

int bb[1000];
int main(){
    int k,x,y,z,a=0,time,i,j,aa[2000];
    char p;
    while(1){
     cin>>time;
     bb[time]++;
     if(cin.get()!=',')
     break;
     }
     i=0;
    while(1){
     cin>>time;
     bb[time]--;
     i++;
     if(cin.get()!=',')
     break;
     }
            x=0;
     for(j=0;j<999;j++){
           a=0;
       for(k=0;k<=j;k++){
              a=a+bb[k];
              }
        if(a>x){
        x=a;
        y=j;
        }
        }
        cout<<i<<" "<<x;
        return 0;
        }