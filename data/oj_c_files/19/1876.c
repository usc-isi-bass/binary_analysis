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
        char s[120], a[120], b[120];
        gets(s);
        gets(a);
        gets(b);
        int len_s = strlen(s);
        int len_a = strlen(a);
        int i = 0, j;
        while (i < len_s) {
                if (i == 0 || s[i - 1] == ' ') {
                        for (j = 0; j < len_a && i + j < len_s; j ++)
                                if (s[i + j] != a[j])
                                        break;
                        if (j == len_a) {
                                cout << b;
                                i += len_a;
                        }
                        else {
                                cout << s[i];
                                i ++;
                        }
                }
                else {
                        cout << s[i];
                        i ++;
                }
        }
        cout << endl;

        return 0;
}
