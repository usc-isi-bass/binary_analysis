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
{
    int num[5]={'\0'};
    long number;
    int i,place=1;

    scanf("%ld",&number);
    do {
    place=1;
    for(i=0;i<=4;i++) {
        num[i]=number%10;
        number/=10;
        if(number!=0) 
            place+=1;
    }
    for(i=0;i<place;i++) 
        printf("%d",num[i]);
    printf("\n");
    scanf("%ld",&number);
    }while(number!=0);
    return 0;
}
        