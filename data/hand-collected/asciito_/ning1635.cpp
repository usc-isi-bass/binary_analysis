
#include <stdio.h>

float atof(char *s){
    float ret = 0;
    while(*s != '\0' && *s != '.'){
        ret = ret * 10 + *s - '0';
        s++;
    }
    
    while(*s != '\0'){
        s++;
    }
    s--;
    float x = 0.000000;
    while(*s != '.'){
        x = x / 10.000000 + (*s - '0') / 10.000000;
        s--;
    }
    ret += x;
    return ret;
}