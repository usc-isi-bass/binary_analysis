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
    int N,l,i;
    char a[100];
    
    scanf("%d",&N);
    while (N--){
        scanf("%s",a);
        l = strlen(a);
        if (strcmp(a + l - 2, "ly") == 0) l-=2;
        if (strcmp(a + l - 2, "er") == 0) l-=2;
        if (strcmp(a + l - 3, "ing") == 0) l-=3;
        for (i=0;i<l;i++) printf("%c",a[i]);
        printf("\n");
    }

    return 0;
}