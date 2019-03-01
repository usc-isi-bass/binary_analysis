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
    int n;
    scanf("%d",&n);
    int shou[n];
    int zhang[n];
    for(int i=0;i<n;i++){
        scanf("%d %d",&(shou[i]),&(zhang[i]));
    }
    int a=0;
    int e=0;
     for(int i=0;i<n;i++){
       if(shou[i]>=90&&shou[i]<=140&&zhang[i]>=60&&zhang[i]<=90){
           a++;
           if(a>e){e=a;}
       }else{a=0;}
    }
    printf("%d",e);
    return 0;
}