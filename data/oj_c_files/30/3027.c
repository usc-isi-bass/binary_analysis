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
    int sum, flag, n; 
    while(cin >> n)
    {
        sum = 0;
        for(int i = 1; i <= n; i++)
        {
            flag = 0;
            if(i%7 == 0) continue;
            int tmp = i;
            while(tmp != 0)
            {
                if(tmp%10 == 7) flag = 1;
                tmp = tmp/10;
            }
            if(flag == 1) continue;
            sum = sum + i*i;
        }
        cout << sum << endl;
    }
    return 0;
}
