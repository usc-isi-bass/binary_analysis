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
    char *p;
    char s[10000];
    int i=0;
    
    gets(s);
    p=s;
    for (p=s;*p!='\0';p++){
        if (*p!='\0') i++;
    }
    
    for (p=s;p<s+i-1;p++){
        printf("%c",*p+*(p+1));
    }
    p=s;
    printf("%c",*p+*(p+i-1));
    
}
