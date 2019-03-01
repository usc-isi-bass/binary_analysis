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

main()
{
     int i,j,a=1;
     char str[1010];
      char str2[1010];
     scanf("%s",str);
     for (int j=0;;j++)
    { if (str[j]=='\0') { str2[j]='\0';break;}
     if (str[j]>='a' && str[j]<='z') str2[j]=str[j]-'a'+'A';
     else str2[j]=str[j];}
     
     for (i=0;i<strlen(str2);i++)
     {  
        
         if (str2[i]==str2[i+1])
         a++;
         else { printf("(%c,%d)",str2[i],a);a=1; continue;}
     }
         
       
    
}      
