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
    char flag='=',i=0;
    char sen_1[80];
    char sen_2[80];
    
    gets(sen_1);
    gets(sen_2);
    
    for(i=0;i<80;i++)
    {
      if(65<=sen_1[i]&&sen_1[i]<=90)
        sen_1[i]=sen_1[i]+32;
      if(65<=sen_2[i]&&sen_2[i]<=90)
        sen_2[i]=sen_2[i]+32;
        
      if(sen_1[i]=='\0'&&sen_2[i]!='\0')
       {
       flag='<';
       break;
       }
      else if(sen_2[i]=='\0'&&sen_1[i]!='\0')
       {
       flag='>';
       break;
       }
      else if(sen_1[i]>sen_2[i])
       {
       flag='>';
       break;
       }
      else if(sen_1[i]<sen_2[i])
       {
       flag='<';
       break;
       } 
      else if(sen_1[i]=='\0'&&sen_2[i]=='\0')
      break;
    }
    printf("%c",flag);
}
