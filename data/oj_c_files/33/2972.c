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
    char s[256];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",s);
        for(int j=0;j<strlen(s);j++){
            switch(s[j]){
                case'A':s[j]='T';
                break;
                case'T':s[j]='A';
                break;
                case'G':s[j]='C';
                break;
                case'C':s[j]='G';
                break;
            }
        }printf("%s\n",s);
    }
    return 0;
}