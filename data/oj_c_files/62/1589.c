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
    int i;
    char s[201]={0};
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i-1]==' '&&(i-1>0)&&s[i]==' ')   continue;
        else printf("%c",s[i]);
}
    return 0;
}