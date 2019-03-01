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

void main()
{
    int i;
    char c[100];
    gets(c);
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='\t'&&c[i+1]!='\t'&&c[i+1]!=' ') printf(" ");
        else if((c[i]!=' '&&c[i]!='\t')||(c[i]==' '&&c[i+1]!=' '&&c[i+1]!='\t'))
        printf("%c",c[i]);
    }
}

