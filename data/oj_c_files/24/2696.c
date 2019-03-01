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

const int N = 1000;
int main() {
    char s[N],max[N],min[N];
    int max_len = 0;
    int min_len = N;
    int n;
    scanf("%d",&n);
    while (n-->0) {
        scanf("%s",s);
        int len = strlen(s);
        if ( len > max_len) {
            max_len = len;
            strcpy(max,s);
        }
        if ( len < min_len) {
            min_len = len;
            strcpy(min,s);
        }
    }
    printf("%s\n%s\n",max,min );
}