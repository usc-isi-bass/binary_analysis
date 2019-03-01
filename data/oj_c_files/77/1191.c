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
    int stack[100], top = 0, count = 0;
    char boy, c;
    cin >> boy;
    stack[top++] = count++;
    while ((c = cin.get()) != '\n')
    {
        if (c == boy)
        {
            stack[top++] = count++;
        }
        else
        {
            printf("%d %d\n", stack[--top], count++);
        }
    }
  
    return 0;
}