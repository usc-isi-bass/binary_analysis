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
    int i,len;
    char word[10000],c;
    gets(word);
    len=strlen(word);
    c=word[0];
    for(i=0;i<len-1;i++)
    word[i]+=word[i+1];
    word[i]+=c;
    printf("%s",word);
   // getch();
    return 0;
}
