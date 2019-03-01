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
    char st[2000];
    cin.getline(st,2000);
    for (int i=1;i<=strlen(st);i++)
        if ('a'<=st[i-1] && st[i-1]<='z') st[i-1]=st[i-1]-32;

          int t=1;
    for (int i=2;i<=strlen(st)+1;i++)
    {
        if (st[i-2]==st[i-1]) t++;
        else {printf("(%c,%d)",st[i-2],t); t=1; }
    }


    return 0;
}
