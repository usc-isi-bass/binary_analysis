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

long reverse(long number);
void main()
{   long num1,num2,num3,num4,num5,num6;
    scanf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld", &num1, &num2, &num3, &num4, &num5, &num6);
    printf("%ld\n%ld\n%ld\n%ld\n%ld\n%ld\n", reverse(num1),reverse(num2),reverse(num3),reverse(num4),reverse(num5),reverse(num6));
}
long reverse(long number)
{
    long res = 0;
    while(number){
        res = res * 10 + number % 10;
        number /= 10;
    }
    return res;
}