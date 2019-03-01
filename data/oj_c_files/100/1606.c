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

int main()
{
    char str[300];
    gets(str);
    int arr[128]={0};
    int i,b=0;
    for (i=0;i<strlen(str);i++) {
        arr[str[i]]++;
        }
    for (i=65;i<91;i++) {
        if (arr[i]>0) {
                    printf("%c=%d\n",i,arr[i]);
                    b=1;
                    }
                    }
    for (i=97;i<123;i++) {
        if (arr[i]>0) {
                    printf("%c=%d\n",i,arr[i]);
                    b=1;
                    }
                    }
    if (b==0) {
             printf("No");
             }
   // puts(str);
    return 0;
}
