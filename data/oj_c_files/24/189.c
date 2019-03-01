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

char ls[1000], ss[1000];
int max, min;
int cl;
char buf[1000];

int main() {
    max = -1;
    min = 0x7fffffff;
    while(scanf("%s", buf) != EOF) {
        cl = strlen(buf);
        if(cl > max) {
            max = cl;
            strcpy(ls, buf);
        }
        if(cl < min) {
            min = cl;
            strcpy(ss, buf);
        }
    }
    puts(ls);
    puts(ss);
return 0;
}
