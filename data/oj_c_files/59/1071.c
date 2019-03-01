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


int main(){
    int n, m, tot=0;
    int i, j, k;
    char map[200][200];
    char map_temp[200][200];
    scanf("%d", &n);
    for (i = 0; i < n; ++ i)
        scanf("%s", &map[i]);
    scanf("%d", &m);
    
    for (k = 1; k < m; ++ k)
    {
        for (i = 0; i < n; ++ i)
            strcpy(map_temp[i], map[i]);
        for (i = 0; i < n; ++ i)
            for (j = 0; j < n; ++ j)
                if (map_temp[i][j] == '@')
                {
                   if (i > 0 && map[i-1][j] == '.')
                      map[i-1][j] = '@';
                   if (i + 1 < n && map[i+1][j] == '.')
                      map[i+1][j] = '@';
                   if (j > 0 && map[i][j-1] == '.')
                      map[i][j-1] = '@';
                   if (j + 1 < n && map[i][j+1] == '.')
                      map[i][j+1] = '@';
                }
    }
    
    for (i = 0; i < n; ++ i)
        for (j = 0; j < n; ++ j)
            if (map[i][j] == '@')
               ++ tot;
    
    printf("%d\n", tot);
    return 0;
}
