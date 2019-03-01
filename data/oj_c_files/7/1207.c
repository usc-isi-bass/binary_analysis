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

/*
  Name:???? 
  Author: ??? 
  Date: 26/12/12 17:01
*/
int main()
{
    char string[10000], subString[300], replacement[1000];
    cin >> string >> subString >> replacement;
    char *p, *q;
    q = replacement;
    p = strstr(string, subString);                                              //??????? 
    if (p != NULL)                                                              //??????? 
    {
        while (*q)
        {
            *p++ = *q++;
        }
    }
    cout << string << endl;                                                     //????????? 
    return 0;
}
    