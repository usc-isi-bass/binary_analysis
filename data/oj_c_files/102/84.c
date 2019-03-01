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

const int MAXN = 50;
int n;
double a[MAXN], b[MAXN];
int nummale, numfemale;
int main() {
    nummale = 0;
    numfemale = 0;
    scanf("%d", &n);
    char sex[10];
    double h;
    for (int i = 0; i < n; ++i) {
        scanf("%s%lf", sex, &h);
        if (strcmp(sex, "male") == 0) {
                        a[nummale++] = h;
        } else {
               b[numfemale++] = h;
        }
        }
        sort(a, a + nummale);
        sort(b, b + numfemale);
        for (int i = 0; i < nummale; ++i)
            printf("%.2lf ", a[i]);
        for (int i = numfemale - 1; i > 0; --i)
            printf("%.2lf ", b[i]);
        if (numfemale > 0)
           printf("%.2lf\n", b[0]);
    
    return 0;
}
