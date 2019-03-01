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
    char data[31];
    int n,i;
    gets(data);
    for(n=0;data[n]!='\0';n++);
    for(i=0;i<n;i++) {
        if(data[i]<='9'&&data[i]>='0') {
            printf("%c",data[i]);
        } else {
            printf("\n");
        }
    }
    return 0;
}