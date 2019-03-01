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
     char string1[100],string2[100];
     gets(string1);
     int l=strlen(string1);
     int i,j,count=0;
     for(i=0;i<100;i++)
        string2[i]='\0';
     for(i=0;i<l;i++)
     {
        if(string1[i]!=32)
        {             
         string2[count]=string1[i];
         count++;
         } 
        else
        {
           string2[count]=string1[i];
           count++;
           for(j=i+1;string1[j]==32;j++);
           i=j-1;
        }
     }
     printf("%s",string2);
     getchar();
     getchar();
}                                                                          
