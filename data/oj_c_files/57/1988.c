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

int main ()
{
    int n,i;
    scanf("%d\n",&n);
    for(i = 0;i < n;i++){
        char a[15],*b;
        int l;
        b = a;
        scanf("%s\n",b);
        l = strlen(a);
        b = &a[l-1];
        if(strcmp(b,"r") == 0||strcmp(b,"y") == 0){
           a[l-2] = 0;
           }
        if(strcmp(b,"g") == 0){
           a[l-3] = 0;
           }
         b = a;
         printf(b);
         printf("\n");
     }
    return 0;
}
