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
    int yuan,e;
    scanf("%d",&yuan);
    int n=6;
    int shu[n];
    int mian[n];
    mian[0]=100,mian[1]=50,mian[2]=20,mian[3]=10,mian[4]=5,mian[5]=1;   
    for(int i=0;i<6;i++){
        e=yuan/mian[i];
        shu[i]=e;
        yuan=yuan-mian[i]*e;        
        printf("%d\n",shu[i]);
    }
    return 0;
}
