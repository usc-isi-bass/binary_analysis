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

int main(){
    char sent[1001];
    gets(sent);
    int i;
    int time=0;
    for (i=0; sent[i]!='\0'; i++) {
        if (sent[i]!=sent[i+1]&&(sent[i]-sent[i+1]!='A'-'a'&&sent[i]-sent[i+1]!=-'A'+'a')) {
            if(sent[i]>='a'){
            printf("(%c,%d)",sent[i]-'a'+'A',time+1);
            }else{
              printf("(%c,%d)",sent[i],time+1);  
            }
            time=0;
        }else{
            time++;
        }
    }
    return 0;
}
    
