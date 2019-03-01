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
char s[60],w[60];
scanf("%s%s",&s,&w);
int n=strlen(s),m=strlen(w);
for (int i=0;i+n<=m;i++)
    {
    for (int j=0;j<n;j++)
        if (s[j]!=w[i+j]) goto P;
    printf("%d",i);
    break;
    P:continue;
    }
}
