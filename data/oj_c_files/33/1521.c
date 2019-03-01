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
    int i,n,t,c;
    char A,T,C,G;
    char jj[500];
    char pd[500];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%s",&jj);
        t=strlen(jj);
        //printf("%d",t);
        for(c=0;c<t;c++){
            if(jj[c]=='A'){
                pd[c]='T';
            }
            else if(jj[c]=='T'){
                pd[c]='A';
            }
            else if(jj[c]=='C'){
                pd[c]='G';
            }
            else if(jj[c]=='G'){
                pd[c]='C';
            }
        }
        pd[t]='\0';
        printf ("%s\n",pd);
    }
    return 0;
}

