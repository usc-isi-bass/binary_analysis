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
    char str[31];
    int i, j;
    char *p, *q;
    cin.getline(str, 31);
    int len;
    len = strlen(str);
    p = str;
    q = str;
    for(i = 0; i < len; i++)
    {
         if(*p - '0' >= 0 && *p - '0' <= 9)
         {
                p++;
         }
         else
         {
                while(*q != *p)
                {
                        cout << *q++;
                }
                if(*(q - 1) - '0' >= 0 && *(q - 1) - '0'<= 9)
                        cout << endl;
                p++;
                q = p;
         }
    }
    if(*(p - 1) - '0' >= 0 && *(p - 1) - '0' <= 9)
    {
          while(*q != *p)
                cout << *q++;
          cout << endl;
    }
    return 0;
}
