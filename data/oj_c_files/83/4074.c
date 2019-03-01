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
//  Track 43, ????
//
//  Created by Charles.thRay.Lee on 9/11/12.
//  Copyright (c) 2012 Peking University. All rights reserved.
/*??
 ?????????????????????GPA?????????????????????????????????
 ??????????
 ???? ??
 90-100 4.0
 85-89  3.7
 82-84  3.3
 78-81  3.0
 75-77  2.7
 72-74  2.3
 68-71  2.0
 64-67  1.5
 60-63  1.0
 60?? 0
 1??????????=????*????
 2?????=????????/????????
 ????????????A??????GPA??
 ????
 ??? ?????n?n<10??
 ??? ????????????????????
 ??? ??????????
 ??????????????
*/


int main()
{
    int n,n1;
    scanf("%d",&n);
    
    double a[2][11];
    double gpa=0,gpa1=0;
    
    
    for (n1=1; n1<=n; n1++) {
        scanf("%lf",&a[0][n1-1]);
    }
    
    for (n1=1; n1<=n; n1++) {
        scanf("%lf",&a[1][n1-1]);
        if (a[1][n1-1]>=90&&a[1][n1-1]<=100) {
            a[1][n1-1]=4.0*a[0][n1-1];
        }
        else
            if (a[1][n1-1]>=85) {
                a[1][n1-1]=3.7*a[0][n1-1];
            }
            else
                if (a[1][n1-1]>=82) {
                    a[1][n1-1]=3.3*a[0][n1-1];
                }
                else
                    if (a[1][n1-1]>=78) {
                        a[1][n1-1]=3.0*a[0][n1-1];
                    }
                    else
                        if (a[1][n1-1]>=75) {
                            a[1][n1-1]=2.7*a[0][n1-1];
                        }
                        else
                            if (a[1][n1-1]>=72) {
                                a[1][n1-1]=2.3*a[0][n1-1];
                            }
                            else
                                if (a[1][n1-1]>=68) {
                                    a[1][n1-1]=2.0*a[0][n1-1];
                                }
                                else
                                    if (a[1][n1-1]>=64) {
                                        a[1][n1-1]=1.5*a[0][n1-1];
                                    }
                                    else
                                        if (a[1][n1-1]>=60) {
                                            a[1][n1-1]=1.0*a[0][n1-1];
                                        }
                                        else
                                            a[1][n1-1]=0*a[0][n1-1];
        gpa=gpa+a[1][n1-1];
        gpa1=gpa1+a[0][n1-1];
    }
    gpa=gpa/gpa1;
    printf("%.2lf",gpa);
    return 0;
}