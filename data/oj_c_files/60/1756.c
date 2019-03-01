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
//  main.cpp
//  ds
//
//  Created by Love on 12-12-27.
//  Copyright (c) 2012? Love. All rights reserved.
//

int prime(int n){
    int j;
    for (j=2; j<n/2+1; j++) {
        if (n%j==0) {
            break;
        }
    }
    if (j==n/2+1) {
        return 1;
    }else{
        return 0;
    }
}
//????
int main(){
    int n;
    int p=0;
    scanf("%d",&n);
    int i;
    for (i=2; i<=n; i++) {
        if (prime(i)==1){
            if (prime(i+2)==1&&i+2<=n) {
                printf("%d %d\n",i,i+2);
                p=1;
            }
        }
    }
    if (p==0) {
        printf("empty");
    }
    return 0;
}