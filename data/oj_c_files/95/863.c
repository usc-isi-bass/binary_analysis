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

void main()
{
     int i;
     char str1[100],str2[100];
     gets(str1);
     gets(str2);
     for(i=0;str1[i]!='\0'||str2[i]!='\0';i++)
     {    
          if(str1[i]<='Z'&&str1[i]>='A')str1[i]=str1[i]+32;
          if(str2[i]<='Z'&&str2[i]>='A')str2[i]=str2[i]+32;
          
       if(str1[i]>str2[i])
           {printf(">");break;}
       else if(str1[i]<str2[i])
           {printf("<");break;}
       if(str1[i+1]=='\0'||str2[i+1]=='\0')printf("=");   
         }
         
     
    
     
     
     




 
}
