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



char a[1000];

int main()
{
    gets(a);
    char *p = a;
    cout << *p;
    for(int i = 1; i < strlen(a); i++){
        if(*(p+i-1)==' '&&*(p+i)==' ')
            continue;
        cout << *(p+i);
    }
}
