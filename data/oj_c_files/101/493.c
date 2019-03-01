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

//**********************************
//*???3.cpp                     *
//*??????                    *
//*???2011-10-02                *
//**********************************
int main()
{
    //??????abc 
    int a;
    int b;
    int c;
    int m[3];  //????,???????? ????,???? ?3 > 2 > 1 
    for(a = 1; a <= 3; a++)
    {
          for(b = 1; b <= 3; b++)
          {
                for(c = 1; c <= 3; c++)
                {
                      if((a + (b > a) + (c == a) == 3) && (b + (a > b) + (c < a) == 3) && (c + (c > b) + (a < b) == 3))
                      {
                          m[0] = a;
                          m[1] = b;
                          m[2] = c;
                      }
                }
          }
    }
    //???????????????A?B?C 
    if(m[0] > m[1] && m[1] > m[2])
    {
            cout << "CBA";
            return 0;
    }
    if(m[0] < m[1] && m[1] < m[2])
    {
            cout << "ABC";
            return 0;
    }
    if(m[0] > m[2] && m[2] > m[1])
    {
            cout << "BCA";
            return 0;
    }
    if(m[0] > m[1] && m[0] < m[2])
    {
            cout << "BAC";
            return 0;
    }
    if(m[0] < m[1] && m[1] > m[2])
    {
            cout << "CAB";
            return 0;
    }
    if(m[0] > m[1] && m[1] > m[2])
    {
            cout << "CBA";
            return 0;
    }
}