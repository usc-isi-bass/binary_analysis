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
    int n;
    cin >> n;

    int nums[n];

    for(int i = 0; i < n; i++)  cin >> nums[i];

    int *p,*end;
    p = nums;
    end = nums + n;
    while(true)
    {
        end=remove(p+1,end,*p);
        if(p!=end-1)
        {
            cout << *p << ',';
        }
        else
        {
            cout << *p;
            break;
        }
        p++;
    }
    return 0;
}
