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
    int l,i,j,k;
    char str[31];
    gets(str);
    l=strlen(str);
    if(str[0]-'0'>=0&&str[0]-'0'<=9)
        {
            printf("%c",str[0]);
            for(k=1;;k++)
            {
              if(str[k]-'0'>=0&&str[k]-'0'<=9)
              printf("%c",str[k]);
              else
              break;
            }
            printf("\n");
        }
    for(i=0;i<l-1;i++)
    {
        if((str[i]-'0'>9||str[i]<'0')&&str[i+1]-'0'<=9&&str[i+1]-'0'>=0)
        {
           for(j=i+1;;j++)
           {
              if(str[j]-'0'<=9&&str[j]-'0'>=0) 
              printf("%c",str[j]);
              else if(str[j]==' ')
              break;
              else
              break;
           }
           printf("\n");
        }
    }
    getchar();
    getchar();
}