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
    int i, j, a[20], sum = 0;                   //??????????????????????
    while (1)
    {
        cin >> a[0];                            //??????
        if(a[0] == -1) break;                   //?????-1????????
        for(i = 1; a[i - 1] != 0; i++)          //???????????0??
        {
            cin >> a[i];
        }
        for(i = 0; a[i] != 0; i++)
        {
            for(j = 0; a[j] != 0;j++)
            {
                if(a[i] == 2 * a[j])            //???????????sum??
                    sum++;
            }
        }
    cout << sum << endl;                        //????????
    sum = 0;                                    //?sum??
    }
    return 0;
}
