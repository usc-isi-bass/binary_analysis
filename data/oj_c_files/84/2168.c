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
    int max1,max2,num,i=1;
    while(i<=10){
    scanf("%d",&num);
    if(i==1){
      max1=num;
    }else if(i==2){
    if(num>max1){
       max2=max1;
       max1=num;
     }else{
      max2=num;
     }
     }else{
     if(num>max1){
     max2=max1;
     max1=num;
}else if(num>max2&&num<max1){
max2=num;
}
}
i++;
}
printf("%d\n%d\n",max1,max2);
return 0;
}
