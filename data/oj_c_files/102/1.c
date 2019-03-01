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
    struct student {
        char gender[7];
        float height;
    } students[40], ts;
    int n, i, j;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%s %f", students[i].gender, &students[i].height);
    }
    for (i=0; i<n; i++) {
        for (j=i+1; j<n; j++) {
            int ex = 0;
            if (students[i].gender[0] == 'f' && students[j].gender[0] == 'm')
                ex = 1;
            else if (students[i].gender[0] == 'm' && students[j].gender[0] == 'm')
                ex = (students[i].height > students[j].height);
            else if (students[i].gender[0] == 'f' && students[j].gender[0] == 'f')
                ex = (students[i].height < students[j].height);
            if (ex) {
                ts = students[i];
                students[i] = students[j];
                students[j] = ts;
            }
        }
    }
    for (i=0; i<n; i++) {
        if (i == 0) {
            printf("%.2f", students[i].height);
        }
        else {
            printf(" %.2f", students[i].height);
        }
    }
    return 0;
}