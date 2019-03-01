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


int main() {
    char s[101]={"\0"}, s1[101]={"\0"};
    int i;
    char *pa=s, *pb=s1;
    gets(pa);
    for(i=0;;i++) {
        *(pb+i)=*(pa+i)+*(pa+i+1);
        if (*(pa+i+2)=='\0') break;
    }
    *(pb+i+1)=*(pa+i+1)+*pa;
    printf("%s", s1);
    return 0;
}