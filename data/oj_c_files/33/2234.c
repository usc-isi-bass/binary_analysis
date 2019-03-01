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
    int n;
    scanf("%d", &n);
    for (int a=0; a<n; a++) {
        char b[256];
        char c[256];
        scanf("%s", b);
        int d=(int)strlen(b);
        for (int e=0; e<d; e++) {
            if (b[e]=='A') {
                c[e]='T';
            }else if (b[e]=='T'){
                c[e]='A';
            }else if(b[e]=='C'){
                c[e]='G';
            }else if(b[e]=='G'){
                c[e]='C';
            }
        }
        c[d]='\0';
        printf("%s\n", c);
    }
    return 0;
}