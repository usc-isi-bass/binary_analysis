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
    char zfc[5];
    int i,a;
    scanf("%s",zfc);
    for(i=0;i<strlen(zfc)/2;i++){
        a=zfc[i];
        zfc[i]=zfc[strlen(zfc)-i-1];
        zfc[strlen(zfc)-i-1]=a;
    }
    printf("%s",zfc);
    return 0;
}