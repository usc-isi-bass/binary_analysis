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
    char s[111];
    char first;
    char *p,*q;
    gets(s);
    p=&s[0];
    q=&s[1];
    first=*p;
    
    while(*q != '\0')
    {
        cout<<(char)  ((*p) + (*q)) ;
        *p++;
        *q++;
    }
    cout<<(char) (*p+first);
    
    return 0;
}
