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

int n, m, a[103][103], q[10001][3], qt, qq, u[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
//a?????????0??????1?????-1?????????????????????????????q??????????????????qt?qq??????u?????
char c;
int main()
{
    int j, k, l;
    cin >> n;
    for (j = 1; j <= n; ++ j)
        for (k = 1; k <= n; ++ k)
        {
            cin >> c;
            switch (c)//??????????
            {
                case '.' :
                    a[j][k] = 1;
                    break;
                case '#' :
                    a[j][k] = 0;
                    break;
                case '@' ://???????????????
                    a[j][k] = -1;
                    q[qq][0] = j;
                    q[qq][1] = k;
                    q[qq][2] = 1;//?????0?
                    ++ qq;
                    break;
            }
        }
    cin >> m;
    for (; qt != qq && q[qt][2] != m; ++ qt)//?????????????????m????
    {
        j = q[qt][0];
        k = q[qt][1];
        for (l = 0; l < 4; ++ l)//??????
            if (a[j + u[l][0]][k + u[l][1]] == 1)//???????????????????????
            {
                a[j + u[l][0]][k + u[l][1]] = -1;
                q[qq][0] = j + u[l][0];
                q[qq][1] = k + u[l][1];
                q[qq][2] = q[qt][2] + 1;
                ++ qq;
            }
    }
    cout << qq << endl;
    return 0;
}
