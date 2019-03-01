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



const int MAX_DIGIT = 10000;

int main()
{
    int num[100];
    num[0] = 1;
    num[1] = 0;
    int numDigits = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int end = numDigits;
        for (int i = 0; i < end; ++i)
        {
            num[i] *= 2;
        }
        for (int i = 0; i < end; ++i)
        {
            if (num[i] >= MAX_DIGIT)
            {
                if (i != numDigits - 1)
                    num[i+1] += num[i] / MAX_DIGIT;
                else
                {
                    num[numDigits] = num[i] / MAX_DIGIT;
                    ++numDigits;
                }
            }
            num[i] = num[i] % MAX_DIGIT;
        }
    }
    for (int i = numDigits - 1; i >= 0; --i)
    {
        if (i != numDigits - 1)
            cout << setfill('0') << setw(4);
       cout << num[i];
    }
    cout << endl;
}
