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
    int firstBig = -1, secBig = -1;
    
    int temp, ret;
    char ch;
    
    while(1){
        ret = scanf("%d", &temp);
        if(ret != 1)
            break;
        
        if( temp < 0){
            printf("Invalid input numbet : negtive\n");
            return -1;
        }
        
        if(temp > secBig){
            if(temp > firstBig){
                secBig = firstBig;
                firstBig = temp;
            }
            else if(temp != firstBig){
                secBig = temp;
            }
        }
        ret = scanf("%c", &ch);
        if(ret != 1 || ch != ',')
            break;
    }
    
    if(secBig == -1){
        printf("No\n");
    }
    else{
        printf("%d\n", secBig);
    }
    return 0;
}