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
    char ch[10]={0};
    int i,s=0;
    gets(ch);
    i=0;
    while(ch[i]!='\0')
    {
        s=i;
        i++;
    }
    for(i=s;i>=0;i--)
    {
        printf("%c",ch[i]);
    }

}