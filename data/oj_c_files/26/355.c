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
    
    char op[104];
   gets(op);
  // printf("%s",op);
  int len;
  
  len=strlen(op);
   char opp[103];
   int j=0;
   for(int i=0;i<=len-1;i++)
   {
           if(op[i]!=32||(op[i]==32&&op[i+1]!=32)) {  opp[j]=op[i];  j++;}
           else
           { while(op[i]==32)   {i++;}
           i--;
           i--;}
           
           
           
           
   }
   
   opp[j]='\0';
   puts(opp);
   getchar();












}


