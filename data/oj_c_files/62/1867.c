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


void delsp(char *c)         //???????
{
    int flag = 0, n = 0;     //flag????
    for (; *(c + n) != '\0'; c++)
    {
        if (*(c + n) == ' ')
        {
            if (*(c + n + 1) == ' ')
            {
                n++;
                c--;
                flag = 1;
            }
        }
        if (flag == 1)
            {*(c + 1) = *(c + 1 + n);
            flag = 0;}
        else
            *c = *(c + n);
    }
    *c =  '\0';
}

int main()
{
    char sen[100];
    cin.getline(sen, 100);
    delsp(sen);
    cout << sen;
    return 0;
}
