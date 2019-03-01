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

void Reverse(int n)
{
     if(n>0)
	 {
        printf("%d",n%10);
        Reverse(n/10);
	 }
}
int main()
{
     int num;
    scanf("%d",&num);
     Reverse(num);
     printf("\n");
     return 0;
}