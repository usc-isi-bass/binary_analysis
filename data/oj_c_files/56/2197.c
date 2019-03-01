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
    char a[6];
    int i=0;
    do{
    a[i]=getchar();
    i++;
    }
    while(a[i-1]!='\n');
    i--;
    for(int j=i-1;j>=0;j--)
    cout<<a[j];
}
