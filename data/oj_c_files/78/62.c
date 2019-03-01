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
    int a[5],i;char n[5]={'l','q','z','s'};
    for(i=0;i<5;i++)
    a[i]=(i+1)*10;
    printf("%c %d\n",n[0],a[4]);
     printf("%c %d\n",n[1],a[3]);
    printf("%c %d\n",n[2],a[1]);
     printf("%c %d\n",n[3],a[0]);
    getchar();getchar();
    
}
