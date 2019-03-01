#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void itoa(int i, char* s){
    int power, j;

    j = i;
    for(power=1; j>=10; j/=10)
        power *= 10;
    
    for(;power>0;power/=10){
        *s++ = '0' + i/power;
        i %= power;
    }

    *s = '\0';
}