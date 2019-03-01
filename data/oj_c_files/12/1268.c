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
	float a[16];
    int j, num;
	while (1)
	{
          num = 0;
    for (int i = 0; i < 16; i++)
    {
        cin >> a[i];
        if (a[0] == -1)
            break;
        if (a[i] == 0)
        {
           j = i - 1;      
           break;
        }   
    }
    if (a[0] == -1)
       break;   
    for (int i = 0; i <= j; i++)
    {
        for (int k = 0; k <= j; k++)
        {
            if (a[i] / a[k] == 2 && i != k)
               num++;
        }
    }
    cout << num << endl;
    }
	return 0;
}
