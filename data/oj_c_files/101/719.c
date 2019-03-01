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



int exam( char s[4], char t );

int main()
{
    char order[6][4]={"ABC", "ACB", "BAC", "BCA", "CAB", "CBA"};
    for( int i=0; i<6; i++ )
    {
        int a=0, b=0, c=0;
        if( exam( order[i], 'B') < exam( order[i], 'A') )
           a++;
        if( exam( order[i], 'C')-exam( order[i], 'A') ==1 )
           a++;
        if( exam( order[i], 'C')-exam( order[i], 'A') ==-1 )
           a++;
        if( exam( order[i], 'A') < exam( order[i], 'B') )
           b++;
        if( exam( order[i], 'A') < exam( order[i], 'C') )
           b++;
        if( exam( order[i], 'C') < exam( order[i], 'B') )
           c++;
        if( exam( order[i], 'B') < exam( order[i], 'A') )
           c++;
        int k=0;
        if( exam( order[i], 'A') == a)
            k++;
        if( exam( order[i], 'B') == b)
            k++;
        if( exam( order[i], 'C') == c)
            k++;
        if( k == 3 )
            cout << order[i];

    }
    return 0;
}

int exam( char s[4], char t )
{
    for( int i=0; i<3; i++ )
    {
        if( s[i]== t)
            return i;
    }
}