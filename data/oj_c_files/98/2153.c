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
//  test
//
//  Created by ??? on 12-12-23.
//  Copyright (c) 2012? ???. All rights reserved.
//



    int main() {
        int n, i, wl, len = 0,line=0;
        char w[64];
        scanf("%d", &n);
        for (int i=1; i<=n; i++) {
            scanf("%s",w);
            wl=strlen(w);
            if (line==0) {
                printf("%s",w);
                len=wl;
                line++;
            }
            else if(len+wl+1<=80)
            {
                printf(" %s",w);
                len+=wl+1;
            }
            else if(len+wl+1>80)
            {
                printf("\n%s",w);
                len=wl;
            }
        }
        return 0;
    }






