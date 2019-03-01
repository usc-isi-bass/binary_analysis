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
    char str1[100];    //????? 
    cin.getline(str1,100);    //?????????? 
    for(int i=1;i<100;i++)     //??????? 
    {
            if(str1[i-1]==' '&&str1[i]==' ') //?????????????????????? 
            {
                          for(int j=i+1;j<100;j++)
                          {
                                  str1[j-1]=str1[j];
                          }
                          i--;      //??????? 
            }
    }
    cout<<str1<<endl; //????? 
    return 0;
} 