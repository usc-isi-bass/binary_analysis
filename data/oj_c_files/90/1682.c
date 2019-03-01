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


int divide(int apple,int plate);

int main()
{
    int n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        int plate,apple;
        scanf("%d %d",&apple,&plate);
        printf("%d\n",divide(apple,plate));
    }    
}    

int divide(int apple, int plate)
{
    if (plate==1)
    {
        return 1;
    }    
    else if (apple<0) 
    {
        return 0;
    }    
    else 
    {
        return divide(apple,plate-1)+divide(apple-plate,plate);
    }    
}    