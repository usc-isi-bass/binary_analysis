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
     int month[12]={31,28,31,30,31,30,31,31,30,31,30,31} , i , j, n, sum = 0 ,b[200][4],temp=0;
     scanf( "%d",&n );
     sum = n + 12;
     if( sum % 7 == 5 )
     printf("1\n");
     for(i = 1 ;i <= 11; i++ )
     {
     sum += month[i-1];
      if( sum % 7 == 5 )
      printf("%d\n",i+1);      
     }     
}
