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


int main(int argc, char* argv[])
{
    char m = 0;
    int cnt[255], i, j, n;
    struct {
        int id;
        char au[32];
    } bk[1000];
    
    memset(cnt, 0, sizeof(cnt));
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d%s", &bk[i].id, bk[i].au);
        for (j = 0; bk[i].au[j]; j++)
            if (++cnt[bk[i].au[j]] > cnt[m])
                m = bk[i].au[j];
    }
    
    printf("%c\n%d\n", m, cnt[m]);
    for (i = 0; i < n; i++)
        if (strchr(bk[i].au, m))
            printf("%d\n", bk[i].id);
    
    return 0;
}
