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
    char str[100];
    gets(str);
    int len = strlen(str);
    for(int i = 0 ; i < len ; i++)
    {
        if(str[i] == ' ')
        {
            cout << str[i];
            while(str[++i] == ' ');
        }
        cout << str[i];
    }
    return 0;
}