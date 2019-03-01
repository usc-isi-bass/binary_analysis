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
    int a,b,c; //a,b,c????A,B,C????
    int word[4]; //word?k????k????????????    
    char rank[4]; //rank?t????t?????
    for(a=1;a<=3;a++)
    {
                     for(b=1;b<=3;b++)
                     {
                                      if(a!=b)
                                      {
                                              for(c=1;c<=3;c++)
                                              {
                                                               if(c!=a&&c!=b)  //a,b,c???1?3 ????????
                                                               {
                                                                             rank[a]='A';
                                                                             rank[b]='B';
                                                                             rank[c]='C';  //?????? ???abc???????ABC
                                                                             word[a]=(b>a)+(c==b);
                                                                             word[b]=(a>b)+(a>c);
                                                                             word[c]=(c>b)+(b>a); //??????
                                                                             if(word[1]>word[2]>word[3])
                                                                             {
                                                                                                        cout<<rank[1]<<rank[2]<<rank[3];
                                                                             }  //???????? ????????????????
                                                               }               
                                              }
                                      }
                     }
    }
    return 0;
}    
