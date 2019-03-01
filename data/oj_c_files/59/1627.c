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



int mat[120][120];

int main()
{
    int n;
    int m;
    char buffer;
    int buffer2;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> buffer;
            if(buffer == '.')
            mat[i][j] = 1;
            if(buffer == '#')
            mat[i][j] = 0;
            if(buffer == '@')
            mat[i][j] = 2;
        }
    }

    cin >> m;

    for(int k = 1; k < m; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(mat[i][j] == 2){
                    if(mat[i][j+1] == 1)
                        mat[i][j+1] = 3;
                    if(mat[i][j-1] == 1)
                        mat[i][j-1] = 3;
                    if(mat[i+1][j] == 1)
                        mat[i+1][j] = 3;
                    if(mat[i-1][j] == 1)
                        mat[i-1][j] = 3;
                }
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(mat[i][j] == 3)
                    mat[i][j] = 2;
            }
        }

    }

    buffer2 = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(mat[i][j] == 2)
                buffer2++;
        }
    }

    cout << buffer2;
    return 0;
}