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
   char c,str[1000],word[20];
   char longword[20],shortword[20];
   int i,j, longlen=0,shortlen=20;
   gets(str);
   i=0;
   j=0;
   while((c=str[i])!='\0')
     if(c!=' ')
       word[j++]=str[i++];
     else
     {
        i++;
        word[j]='\0';
        if(j>longlen)
         {  longlen=j;strcpy(longword,word);}
        if(j<shortlen)
         {  shortlen=j;strcpy(shortword,word);}
        j=0;
      }
	 word[j]=0;
	 if(j>longlen)
         {  longlen=j;strcpy(longword,word);}
        else if(j<shortlen)
         {  shortlen=j;strcpy(shortword,word);}
    puts(longword);
    puts(shortword);
}