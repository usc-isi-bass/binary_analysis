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
 char words[MAXNUM],temp[MAXNUM];
 gets(words);
 int len1,len2,ans;
 len1=strlen(words);
 len2=0;
 for(int i=0;i<len1;i++)
 {
  if(words[i]>=48&&words[i]<=57)
   temp[len2++]=words[i];
   else
   {
    if(len2>=1) 
    {
      temp[len2]='\0';
      cout<<(int)atof(temp)<<endl;
      len2=0;  
    }
    else
     continue;
   }
 }
 if(len2>=1&&(words[len1-1]>=48&&words[len1-1]<=57))
 {temp[len2]='\0';
 cout<<(int)atof(temp);}
 return 0;
}
