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

//
//  8.cpp
//  poj
//
//  Created by ChuPan,Wong on 10/25/13.
//  Copyright (c) 2013 ChuPan,Wong. All rights reserved.
//


int main(){
    int n;
    int* num;
    int i,j;
    scanf("%d", &n);
    num = (int*)malloc(sizeof(int)*n);
    j = n; i = 0;
    while (j--) {
        scanf("%d", &num[i]);
        i++;
    }
    for (i = 0; i <= (n-1)/2; i++) {
        j = num[i];
        num[i] = num[n-1-i];
        num[n-1-i] = j;
    }
    for (i = 0; i < n; i++) {
        if(i!=0)
            printf(" ");
        printf("%d", num[i]);
    }
    printf("\n");
    return 0;
}