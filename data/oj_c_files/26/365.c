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

//****************************************************** 
//* ? ? ?   ?? ? ? ? ? ? ?                  *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 12 ? 8 ?                    * 
//* ? ? ? ??? ? ? ? ? ? ?                  *
//* ? ?      ?1000010439                            *
//******************************************************
int main()
{
    char a[100];                               //??????? 
    int b,i;                                   //b???????? 
    char *p;                                   //?????????? 
    cin.getline(a,100);                        //????? 
    p = a;                                     //????????????? 
    b = strlen(a);
    for(;p<a+b;)
    {   
       if(*p ==' ')                            //?????? 
       {
          p++;                                 //???????? 
          if(*p != ' ')                        //???????,???????,??????????????????? 
          {
             cout << " " <<*p;
             p++;                              //???? 
          }
       }
       else                                    //??,?????? 
       {
          cout << *p;
          p++;
       }
    }
    return 0;
}
