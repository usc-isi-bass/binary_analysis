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
    char str[300*100];   /* ??????????????100??? */
    int wls[300] = {0};  /* ?????? */
    int wc = 0;          /* ??? */
    int i, j;

    /* ????? */
    gets(str);
    /* ?????? */
    for (i=0; str[i]!=0; i++) {
        /* ??????????????? */
        if (str[i] != ' ') {
            /* ????????????? */
            for (j=i+1; str[j]!=0&&str[j]!=' '; j++);
            /* ?????????????????1 */
            wls[wc] = j - i;
            wc++;
            /* ???????????i?j??????? */
            if (str[j]==0) {
                break;
            } else {
                i = j;
            }
        }
    }
    /* ?????????? */
    printf("%d", wls[0]);
    /* ????????? */
    for (i=1; i<wc; i++) {
        printf(",%d", wls[i]);
    }
    return 0;
}

/*************************************************************************/
/* Ex 5.3       ??????????  */
/*************************************************************************/


int main_e5_3()
{
    char str[101];
    int i, j;
    /* ????? */
    scanf("%s", str);
    /* ??????? */
    for (i=0,j=strlen(str)-1; i<j; i++,j--) {
        if (str[i] != str[j]) {
            /* ????????????????????????????? */
            printf("no");
            return 0;
        }
    }
    /* ?????????????????????? */
    printf("yes");
    return 0;
}
