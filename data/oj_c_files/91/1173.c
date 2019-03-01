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
    int l,i;
    char a[1000]={0},b[1000]={0};
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++)
       {b[i]=a[i]+a[(i+1)%l];
       printf("%c",b[i]);}
return 0;
}