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
    int n,i,SA=0,SB=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++){
    scanf("%d %d",&a[i],&b[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]==b[i]-1||a[i]==b[i]+2){
            SA++;
        }
        else if(b[i]==a[i]-1||b[i]==a[i]+2){SB++;}
        else{SA=SA;SB=SB;}
    }
   if(SA>SB){printf("A");} 
   else if(SA<SB){printf("B");}
   else if(SA=SB){printf("Tie");}
   return 0;
}