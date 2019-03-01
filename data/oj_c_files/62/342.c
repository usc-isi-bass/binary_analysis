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

int main() {
    int i,m,k;
    char kg[200];
    gets(kg);
    m=strlen(kg);
    for(i=0;i<m-1;i++){
        if(kg[i]==' '){
            if(kg[i+1]!=' '){continue;}
            else{k=i;
                while(i<m-1){kg[i]=kg[i+1];
                             i++;
                }
                i=k-2;
                m--;
            }
        }
    }
    kg[m]='\0';
    printf("%s",kg);
    return 0;
}