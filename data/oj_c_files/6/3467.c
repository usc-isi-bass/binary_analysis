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
//  Track 86,??????????
//
//  Created by Charles.thRay.Lee on 11/1/13.
//  Copyright (c) 2013 Peking University. All rights reserved.
/*
 ??
 ????????????????????????????????????????????????????????????
 ????
 ??????k????k????
 ?????????????????
 ???????????m???n?m<100?n<100????????????
 ??????m?????????n????????????????
 ????
 ??????????????????
 ????
 2
 
 4 4
 
 1 1 1 1
 
 0 0 0 0
 
 1 0 1 0
 
 0 0 0 0
 
 3 3
 
 3 4 1
 
 3 7 1
 
 2 0 1
 ????
 5
 
 15
*/


int main()
{
    int k,m,n;
    scanf("%d",&k);
    int a[100][100]={0};
    int *p,i1,i2,sum=0;
    
    for (; k>0; k--) {
        sum=0;
        scanf("%d%d",&m,&n);
        for (i1=0; i1<m; i1++) {
            p=a[i1];
            for (i2=0; i2<n; i2++) {
                scanf("%d",p);
                sum=sum+*p;
                p++;
            }
        }
        for (i1=1; i1<m-1; i1++) {
            p=a[i1];
            p++;
            for (i2=1; i2<n-1; i2++) {
                sum=sum-*p;
                p++;
            }
        }
        printf("%d\n",sum);
    }
}