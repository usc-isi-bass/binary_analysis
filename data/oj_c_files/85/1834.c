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
    int n;
    char str[1024];
    scanf("%d", &n);
    int flag;
    while (n--) {
        flag = 1;
        scanf("%s", str);
        int len = strlen(str);
        for (int i = 0; i < len; ++i) {
            if (isalpha(str[i]) || str[i] == '_')
                continue;
            else if (i != 0 && isdigit(str[i]))
                continue;
            else {
                flag = 0;
                break;
            }
        }
        if (flag)
            printf("yes\n");
        else
            printf("no\n");
    }
}