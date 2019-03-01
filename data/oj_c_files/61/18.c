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
    int n,i,j;
    int ph[20] = {1, 1};
    int a[20];
    
    for (i=2; i<20; i++)
        ph[i] = ph[i-2] + ph[i-1];
    scanf("%d\n", &n);
    for (j = 0; j < n; j++)
        scanf("%d", &a[j]);
    for (j = 0; j < n; j++)
        printf("%d\n", ph[a[j]-1]);
    return 0;
}