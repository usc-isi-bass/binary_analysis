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
    int sum=0;
    int n;
    scanf("%d",&n);
    for(int num=1;num<=n;num++)
    {
                       
            if(num%7==0||(num-70<=9&&num-70>0)||num%10==7)
            {
                continue;
            }
            sum+=num*num;
            
    } 
    printf("%d",sum);
    getchar();getchar();
    return 0;
}