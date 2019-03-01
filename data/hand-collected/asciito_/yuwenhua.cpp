#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int myAtoi(char* str) 
{
    int len, i, e_len = 0; //effective length
    if(!str) return 0;
    int result = 0;
    int negative = 0;
    char e_str[4096];
    int j = 0;
    int tmp_result = 0;

    
    len = strlen(str);
    memset(e_str, 0, sizeof(e_str));

    for(i = 0; i < len ; i++) {
        if('0' <= str[i] && '9' >= str[i]) {
            e_len++;
            e_str[j++] = str[i];
        }
        else if((str[i] == '+') && (e_len == 0)){
            if(str[i+1] && (str[i+1] >= '0' && str[i+1] <= '9'))
                continue;
            else 
                return 0;
        }
        else if((str[i] == '-') && (e_len == 0)) {
            if(str[i+1] && (str[i+1] >= '0' && str[i+1] <= '9'))
                negative = 1;
            else
                return 0;
        }
        else if((str[i] == ' ') && (e_len == 0)) {
            continue;
        }
        else 
            break;
    }

    for(i = 0; i < e_len; i++) {
        tmp_result = result;
        result += (e_str[i] - 0x30) * pow(10, e_len-i-1);
        if(negative == 1 && result == -2147483648){
            return -2147483648;
        }
        else if(result < tmp_result) { //overflow
            if(negative == 1)
                return -2147483648;
            else 
                return 2147483647;
        }
    }
    if(negative == 1){
        result = 0 - result;
    }
    return result;
}