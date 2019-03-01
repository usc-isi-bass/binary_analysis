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
    int n,a,c;
    scanf("%d",&n);
    c=0;
    if(n!=0)
    for(;n!=0;n=n/10)
    {
    a=n%10;
    printf("%d",a);
    
             }
    else 
     printf("0");
    return(0);
    
    
}