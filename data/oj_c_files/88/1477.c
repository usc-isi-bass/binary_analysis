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

/*
 *??? 
 *2010 - 12 - 9 
 *?????3 - ???? 
 */ 
int main()
{
    char str[31];
    cin.getline ( str, 31 );
    char *p = NULL;
    int flag = 0, first = 1 ;//flag?????????????????0;first??????????????? 
    for ( p = str; *p != '\0'; p++ )
    {
        if ( *p <= '9' && *p >= '0' )//????? 
        {
             if ( flag == 0 )//?????? 
             {
                  if ( first == 1 )//?????????? 
                  {
                     cout << *p;//????????? 
                     first = 0;
                  }
                  else//?????????????? 
                      cout << endl << *p;
             }
             else//?????????? 
                 cout << *p;
             flag = 1;//???? 
        }
        else//???? 
            flag = 0;//?? 
    }
    return 0;
} 