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

void main()
{
    int a;
    scanf("%d",&a);
   if (9999<a&&a<99999) printf("%d%d%d%d%d",a%10,a/10%10,a/100%10,a/1000%10,a/10000);
   if (999<a&&a<9999) printf("%d%d%d%d",a%10,a/10%10,a/100%10,a/1000%10);
   if (99<a&&a<999) printf("%d%d%d",a%10,a/10%10,a/100%10);
   if (9<a&&a<99) printf("%d%d",a%10,a/10%10);
   if (0<a&&a<9) printf("%d",a);
}