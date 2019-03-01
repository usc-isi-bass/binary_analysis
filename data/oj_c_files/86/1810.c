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
    int n, m, t, itime = 0;
    int mat1[100][100];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> m;
        mat1[i][0] = m;
        for (int j = 1; j < m + 1; j++) {
            cin >> mat1[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        m = mat1[i][0];
        if(mat1[i][0] == 0){
            cout << 60 << endl;
            continue;
        }
            for (int j = 1; j < m + 1; j++) {

                t = mat1[i][j];

                if ((t + j*3) >= 60 && (t + j*3) < 63) {
                    cout << t << endl;
                    break;
                }

               if ((t + j*3) >= 60 && (t + j*3) >= 63) {
                    cout << (63 - j*3) << endl;
                    break;
                }
                if (j == m)
                    cout << (60 - j*3) << endl;
            }
    }
    return 0;
}