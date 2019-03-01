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
    char a[101]={'\0'};
    while((scanf("%s",a))!=-1)
          {
              printf("%s\n",a);
              int b,c,d;
              for(b=0;b<100;b++)
              {
                  if(a[b]==')')
                  {
                      for(c=b-1;c>=0;c--)
                      {
                          if(a[c]=='(')
                             {
                                 a[c]='a';a[b]='a';break;
                             }
                      }
                  }
              }
              for(d=0;d<100;d++)
              {
                  if(a[d]==')')printf("?");
                  else if(a[d]=='(')printf("$");
                  else if(a[d]!='\0')printf(" ");
                  a[d]='\0';
              }
              printf("\n");

          }
}