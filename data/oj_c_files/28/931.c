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

int main (){
    int i,k,n,L,l[300];
    char dc[300][100];
    char s[1000];
    gets(s);
    getchar();
    L=strlen(s);
    n=0;
    k=0;
    for (i=0;i<L;i++){
        if ( s[i]!=' '){
             dc[n][k]=s[i];
             k++;
        } else {
               dc[n][k]='\0';
               n++;
               k=0;
               while ( s[i+1]==' '){
                     i++;
               }
        }
    }
    dc[n][k]='\0';
    for (i=0;i<n+1;i++){
        l[i]=strlen(dc[i]);
    }
    printf("%d",l[0]);
    getchar();
    for (i=1;i<n+1;i++){
        printf(",%d",l[i]);
        getchar();
    }
    return 0;
}
