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
    int c[60]={0};
    int i,j=1,len,tem;
    char str[301];
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {           
       if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
       {
            tem=str[i]-'A';
            c[tem]++;
            j=0; 
                                                   
                                                     }
                      }
    for(i=0;i<60;i++)
    {
        if(c[i]!=0)
        {
        printf("%c=%d\n",'A'+i,c[i]); 
                    }   
}           
        if(j)
         {
         printf("No");
                     }

     return 0; 
    
    } 
