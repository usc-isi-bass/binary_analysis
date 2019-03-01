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

int sort(int a,int b);
int main(){
    int money;
    scanf("%d",&money);
    money=sort(money,100);
    money=sort(money,50);
    money=sort(money,20);
    money=sort(money,10);
    money=sort(money,5);
    money=sort(money,1);
    return 0;
}
int sort(int a,int b){
    printf("%d\n",a/b);
    return a%b;
}