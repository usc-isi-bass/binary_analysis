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
    char a[32], b[32];
    int n, i, j, len;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%s", &a);
        len=strlen(a);
        if((a[len-1]=='r'&&a[len-2]=='e')||(a[len-1]=='y'&&a[len-2]=='l')){
            for(j=0;j<len-2;j++)b[j]=a[j];
            b[j]='\0';
            printf("%s\n", b);
        }
        if(a[len-1]=='g'&&a[len-2]=='n'&&a[len-3]=='i'){
            for(j=0;j<len-3;j++)b[j]=a[j];
            b[j]='\0';
            printf("%s\n", b);
        }
    }
    return 0;
}
