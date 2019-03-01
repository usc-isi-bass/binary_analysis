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

int main(){
    int i;
    char aa[100],bb[100];
     gets(aa);
     gets(bb);
     i=0;
     while(aa[i]!='\0')
     {  
            if(aa[i]<=122&&aa[i]>=97)
               aa[i]=aa[i]-32;
               i++;
               }
     i=0;
      while(bb[i]!='\0')
     {  if(bb[i]<=122&&bb[i]>=97)
               bb[i]=bb[i]-32;
               i++;
               }
     if(strcmp(aa,bb)<0)
     cout<<"<";
     if(strcmp(aa,bb)==0)
     cout<<"=";
     if(strcmp(aa,bb)>0)
     cout<<">";
     return 0;
     }