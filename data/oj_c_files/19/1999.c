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
    char str[101], aim[101], change[101];
    
    gets(str);
    gets(aim);
    gets(change);
    
    int i;
    int count;
    char tword[101];
    count = 0;
    tword[count]='\0';
    for(i=0;i<strlen(str);i++)
    {
                              if(str[i]!=' '&&str[i]!=',')//???????????????????????? 
                              {
                                                tword[count] = str[i];
                                                count++;
                                                }
                              else
                              {
                                  tword[count]='\0';
                                  if(strcmp(tword, aim) == 0)
                                  {
                                                   printf("%s ", change);
                                                   }
                                  else
                                      printf("%s ", tword);
                                  count = 0;
                                  tword[count]='\0';
                                  }
                              }
    tword[count]='\0';
    if(strcmp(tword, aim) == 0)
    {
                     printf("%s", change);
                     }
    else
        printf("%s", tword);
    return 0;
}