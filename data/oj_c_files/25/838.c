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
    char ANS[MAX];
    memset(ANS,0,sizeof(ANS));
    ANS[0]='1';
    ANS[1]='\0';
    int N;
    cin>>N;

    for(int i=1;i<=N;i++){
        int LEN=strlen(ANS);
        int g=0,h=0,k;

        for(k=0;g||k<LEN;k++){
            int mk=0;
            if(k<LEN) mk=ANS[k]-'0';
            h=mk*2+g;
            g=h/10;
            ANS[k]=h%10+'0';
        }

        ANS[k]='\0';
    }
    for(int i=0;i<strlen(ANS);i++) cout<<ANS[strlen(ANS)-i-1];

    return 0;
}
