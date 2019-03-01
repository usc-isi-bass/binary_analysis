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
//????????? 
//????????? 
//??????
//***********************************************************************
int match(int i, int n, char str[]);        //???? 
int main()                                  //??? 
{
    char str[101];
    int n; 
    while(cin>>str)                        //???? 
    {
                   cout<<str<<endl; 
                   n = strlen(str);
                   match(0, n, str);
                   cout<<str<<endl; 
    } 
    return 0;
}
int match(int i, int n, char str[])       //???? 
{
     if(i == n)                           //???? 
          return 0; 
     else if(str[i] == ')')              //?????? 
     {
          str[i] = '?'; 
          for(int j = i - 1; j >= 0; j--)
                              if(str[j] == '$')
                              {
                                        str[j] = ' ';
                                        str[i] = ' ';
                                        break; 
                              } 
          match(i + 1, n, str); 
          return 0;
     }
     else if(str[i] == '(')            //??????$ 
     {
          str[i] = '$';
          match(i + 1, n, str);        //???? 
          return 0;
     }  
     else 
     {
          str[i] = ' ';
          match(i + 1, n, str); 
          return 0; 
     } 
} 
          
