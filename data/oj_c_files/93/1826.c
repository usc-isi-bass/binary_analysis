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
    int n;
    scanf("%d",&n);
    int r3 = 0, r5 = 0, r7 = 0;
    if (n%3!=0) r3 = 1;
    if (n%5!=0) r5 = 1;
    if (n%7!=0) r7 = 1;
    int temp = r3*4 + r5*2 +r7;    
    switch (temp)
    {
        case 7 :
             printf("n\n");
             break;
        case 1 :
             printf("3 5\n");
             break;
        case 2 :
             printf("3 7\n");
             break;
        case 4 :
             printf("5 7\n");
             break;
        case 6 :
             printf("7\n");
             break;
        case 5 :
             printf("5\n");
             break;
        case 3 :
             printf("3\n");
             break;
        case 0 : 
             printf("3 5 7\n");
             break;      
    }   
    getchar();
    getchar(); 
    return 0;
}