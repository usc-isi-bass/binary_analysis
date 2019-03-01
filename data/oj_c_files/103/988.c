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
    char word[1000] ;
    cin>> word ;
    int length = strlen(word );
    for (int i = 0 ; i< length ; i++)
    {
        if (word[i] >= 'a' && word[i] <= 'z' )
            word[i]+=('A' - 'a') ; // ???????
    }
    char temp = word [0] ;
    int counts = 1 ;
    for (int i = 1 ; i< length ; i++)
    {
        if (word[i] != temp )
        {
            printf("(%c,%d)" ,temp ,counts );
            temp = word[i] ;
            counts = 1 ;
        }
        else
        {
            counts++;
        }
    }
    printf("(%c,%d)" ,temp ,counts );
    return 0;
}
