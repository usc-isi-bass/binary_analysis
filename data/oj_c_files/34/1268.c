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

//*****************************************************
//???????
//??:??????????
// ??????
//****************************************************** 
int main()                              //??? 
{                                       //????? 
    int num;                            //??????num 
    cin>>num;                           //?? 
    while(num != 1)                     //while??????1?? 
    {
              if(num % 2 == 0)          //if???????? 
              {
                                        //?? 
                     cout<<num<<"/2="<<num/2<<"\n";
                     num = num / 2;
              }
              else 
              {
                   cout<<num<<"*3+1="<<num * 3 + 1<<"\n";
                   num = num * 3 + 1;
              }
    }
    cout<<"End"<<"\n";
    return 0;
}                                     //????? 
