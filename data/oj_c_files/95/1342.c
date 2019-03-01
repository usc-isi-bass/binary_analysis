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
    char a[80]={0},b[80]={0};
    int i=0;
    for(gets(a);i<80,a[i];i++){
        if(a[i]>='A'&&a[i]<='Z')a[i]+=32;
    }
    i=0;
    for(gets(b);i<80,b[i];i++){
        if(b[i]>='A'&&b[i]<='Z')b[i]+=32;
    }
    if(strcmp(a,b)==1)printf("%c",'>');
    if(strcmp(a,b)==0)printf("%c",'=');
    if(strcmp(a,b)==-1)printf("%c",'<');
    return 0;
}