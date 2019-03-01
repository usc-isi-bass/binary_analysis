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
    char s[1000],t[1000];
    int len;
    int n;
    scanf("%d",&n);
    while (n-->0) {
        scanf("%s",s);
        len = strlen(s);
        memset(t,' ',len);
        t[len] = 0;

        for(int i = 0; i < len; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                t[i] = '$';
            }
            char match = ' ';
            if (s[i] == ')') {
                match = '(';
            } else if (s[i] == ']') {
                match = '[';
            } else if (s[i] == '}') {
                match = '{';
            }
            if (match != ' ') {
                for(int j = i-1; j>= 0; j--) {
                    if (t[j] == '$') {
                        if (s[j] == match){
                            t[j] = ' ';
                            match = ' ';
                        }
                        break;
                    }
                }
                if (match != ' ') {
                    t[i] = '?';
                }
            }
        }
        printf("%s\n%s\n",s, t);
    }
}