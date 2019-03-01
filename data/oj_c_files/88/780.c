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
     char *p,*q;
     p=(char*)malloc(30*sizeof(char));
     q=p;
     gets(q);
     for(q=p;*q!='\0';q++)
     {
                          if(*q>=48&&*q<=57)continue;
                          else *q='*';
                          }
     for(q=p;*q!='\0';q++)
     {
                          if(*q!='*')printf("%c",*q);
                          if(*q=='*'&&*(q+1)!='*')printf("\n");
     }
  
 
}
