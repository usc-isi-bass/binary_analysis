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

//***********************************************************************
//??????? 
//??????? 
//??????
//***********************************************************************
int main()                                  //??? 
{
    char str[101], g, b;                  
    int c = 1, p[101] = {0};
    str[0] = cin.get();
    b = str[0];                            //?????????????????? 
    for(int i = 1; i < 101; i ++)          // for???????? 
    {
            str[i] = cin.get();
                                           //??????????????????????????????? 
            if(str[i] != str[0] && str[i] != '\n')
            { 
                      g = str[i];
                      p[i] = 1;
            } 
            if(str[i] == '\n')
                      break; 
            c++;                         //????c?? 
    }
    for(int i = 1; i < c; i++)           //?????????????? 
    {
            if(str[i] == g)
            {
                      for(int j = i - 1; j >= 0; j--) 
                      if(p[j] == 0)
                      {
                           cout<<j<<" "<<i<<endl;
                           p[j] = 1;
                           break;
                      }
            }
    }
    return 0;                              //????? 
}  
