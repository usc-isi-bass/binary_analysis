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
//  main.c
//  Track 81,????
//
//  Created by Charles.thRay.Lee on 2/1/13.
//  Copyright (c) 2013 Peking University. All rights reserved.
/*
 ??	???? ???? 06
 ??
 ???? s ? w ??? s ??? w ??????????
 ????
 ??????????? s ?????? w ????????????????????????50?
 ????
 ????????s ? w ???????
 ????
 it waiter
 ????
 2
*/


int compare(char s[50],char w[50],int i)
{
    int i1,k=1;
    long len;
    len=strlen(s);
    for (i1=0; i1<len; i1++) {
        if (s[i1]!=w[i+i1]) {
            k=0;
            break;
        }
    }
    if (k==0) {
        return 0;
    }
    else
        return 1;
}

int main()
{
    char s[50];
    char w[50];
    int i;
    long len;
    scanf("%s",s);
    scanf("%s",w);
    
    len=strlen(w);
    for (i=0; i<len; i++) {
        if (s[0]==w[i]) {
            if (compare(s,w,i)==1) {
                printf("%d",i);
                break;
            }
        }
    }
}